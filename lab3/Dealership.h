#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include "Showroom.h"
#include <string>
#include <vector>


class Dealership
{
    private:
        std::string name;
        int capacity;
        int numberOfShowrooms;
        float total;
        std::vector<Showroom> showroomClassList;
    public:
        Dealership(std::string nameDealership = "Generic Dealership", int capacityDealership = 0);
        void AddShowroom(Showroom s);
        float GetAveragePrice();
        void ShowInventory();

};

#endif