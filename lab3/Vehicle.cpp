#include "Vehicle.h"
#include <string>
#include <iostream>

//Vehicle Methods
Vehicle::Vehicle(std::string vehicleMake, std::string vehicleModel, int vehicleYear, float vehiclePrice, int vehicleMileage)
{
    make = vehicleMake;
    model = vehicleModel;
    year = vehicleYear;
    price = vehiclePrice;
    mileage = vehicleMileage;
    Display();

}
void Vehicle::Display()
{
    std::cout << year << ' ' << make << ' ' << model << ' ' << mileage << std::endl;
}
std::string Vehicle::GetYearMakeModel()
{
    std::string space = " ";
    return std::to_string(year) + space + make + space + model;
}
float Vehicle::GetPrice()
{
    return price;
}