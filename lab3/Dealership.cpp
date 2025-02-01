#include "Dealership.h"

#include <iostream>
#include <string>
#include <vector>


Dealership::Dealership(std::string nameDealership, int capacityDealership)
{
    name = nameDealership;
    capacity = capacityDealership;

    std::cout << name << " is empty!" << std::endl;
}

void Dealership::AddShowroom(Showroom s)
{
    if (numberOfShowrooms == capacity)
    {
        std::cout << "Dealership is full, can't add another showroom!" << std::endl;
    }
    else
    {
        showroomClassList.push_back(s);
    }
}

float Dealership::GetAveragePrice()
{
    Showroom showroom;

    total = 0.0;
    for (int i = 0; i < showroomClassList.size(); i++)
    {
        total += showroomClassList[i].GetInventoryValue();
    }

    return total/showroomClassList.size();

}

void Dealership::ShowInventory()
{

}