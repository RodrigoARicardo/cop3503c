#include "Showroom.h"
#include <iostream>
#include <vector>
#include <string>

Showroom::Showroom(std::string nameShowroom, int capacityShowroom)
{
    name = nameShowroom;
    capacity = capacityShowroom;
    std::cout << name << " is empty!" << std::endl;
}
std::vector<Vehicle> Showroom::GetVehicleList()
{
    return vehicleClassList;
}

void Showroom::AddVehicle(Vehicle v)
{
    Vehicle vehicle;
    std::string yearMakeModel = vehicle.GetYearMakeModel();
    if (vehicleClassList.size() <= capacity)
    {
        std::cout << "Showroom is full! Cannot add " << yearMakeModel << std::endl;
    } 
    else
    {
        vehicleClassList.push_back(v);
    }

}

void Showroom::ShowInvetory()
{
    Vehicle vehicle;

    for (int i = 0; i < vehicleClassList.size(); i++)
    {
        vehicleClassList[i].Display();
    }
}

float Showroom::GetInventoryValue()
{
    Vehicle vehicle;
    totalInventoryValue = 0.0;

    for (int i = 0; i < vehicleClassList.size(); i++)
    {
        totalInventoryValue += vehicleClassList[i].GetPrice();
    }
    
    return totalInventoryValue;
}