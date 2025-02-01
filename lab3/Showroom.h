#ifndef SHOWROOM_H
#define SHOWROOOM_H

#include "Vehicle.h"
#include <string>
#include <vector>

class Showroom
{
    private:
        std::vector<Vehicle> vehicleClassList;
        std::string name;
        int capacity;
        float totalInventoryValue;
    public:
        Showroom(std::string nameShowroom = "Unnamed Showroom", int capacityShowroom = 0);
        //declares a function called "GetVehiclesList()" that returns a vector allowing outside functions to access this vector
        std::vector<Vehicle> GetVehicleList();

        void AddVehicle(Vehicle v);
        void ShowInvetory();
        float GetInventoryValue();

};


#endif