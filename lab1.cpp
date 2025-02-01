#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

// Function to get title, column 1, and column 2 headers
void getTitleColumns(std::string& title, std::string& col1, std::string& col2)
{
    std::cout << "Enter a title for the data:" << '\n';
    getline(std::cin, title);
    std::cout << "You entered: " << title << '\n';

    std::cout << "Enter the column 1 header:" << '\n';
    getline(std::cin, col1);
    std::cout << "You entered: " << col1 << '\n';

    std::cout << "Enter the column 2 header:" << '\n';
    getline(std::cin, col2);
    std::cout << "You entered: " << col2 << '\n';
}

// Function to process data points input
bool getDataPoints(std::string& dp1, std::string dp2, int& intDp1, int& intDp2, std::vector<std::string>& dataPoint1, std::vector<int>& dataPoint2)
{
    std::cout << "Enter a data point (-1 to stop input):" << std::endl;
    std::string input;
    getline(std::cin, input);

    try
    {
        intDp1 = std::stoi(input);
        if (intDp1 == -1)
        {
            return false;
        }
    }
    catch (...)
    {
        int delPosition = input.find(',');
        if (delPosition != std::string::npos)
        {
            dp1 = input.substr(0, delPosition);
            dp2 = input.substr(delPosition + 1);

            delPosition = dp2.find(',');
            if (delPosition != std::string::npos)
            {
                std::cout << "Error: Too many commas in input." << std::endl;
                return false;
            }
            else
            {
                try
                {
                    intDp2 = std::stoi(dp2);
                }
                catch (const std::invalid_argument& e)
                {
                    std::cout << "Error: Comma not followed by an integer." << std::endl;
                    return false;
                }
            }
        }
        else
        {
            std::cout << "Error: No comma in string." << std::endl;
            return false;
        }

        return true;
    }
    return true;
}

// Function to print the data table
void printTable(std::string& title, std::string& col1, std::string& col2, std::vector<std::string>& dataPoint1, std::vector<int>& dataPoint2)
{
    std::string middleBeam = "|";

    std::cout << '\n' << std::setw(33) << std::right << title << '\n';
    std::cout << std::left << std::setw(20) << col1 << middleBeam << std::right << std::setw(23) << col2 << '\n';
    std::cout << "--------------------------------------------" << std::endl;

    for (int i = 0; i < dataPoint1.size(); i++)
    {
        std::cout << std::setw(20) << std::left << dataPoint1[i] << middleBeam << std::setw(23) << std::right << dataPoint2[i] << '\n';
    }
}

// Function to print the histogram
void printHistogram(std::string& title, std::string& col1, std::string& col2, std::vector<std::string>& dataPoint1, std::vector<int>& dataPoint2)
{
    std::cout << std::endl;

    for (int i = 0; i < dataPoint1.size(); i++)
    {
        std::cout << std::setw(20) << std::right << dataPoint1[i] << ' ';
        for (int j = 0; j < dataPoint2[i]; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Main function
int main()
{
    std::string title, col1, col2, dp1, dp2;
    int intDp1 = 0, intDp2;
    std::vector<std::string> dataPoint1;
    std::vector<int> dataPoint2;

    getTitleColumns(title, col1, col2);

    while (intDp1 != -1)
    {
        bool input = getDataPoints(dp1, dp2, intDp1, intDp2, dataPoint1, dataPoint2);

        if (input)
        {
            std::cout << "Data string: " << dp1 << '\n' << "Data integer: " << intDp2 << '\n';
            dataPoint1.push_back(dp1);
            dataPoint2.push_back(intDp2);
        }
    }

    printTable(title, col1, col2, dataPoint1, dataPoint2);
    printHistogram(title, col1, col2, dataPoint1, dataPoint2);
}