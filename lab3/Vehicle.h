#ifndef VEHICLE_H
#define VEHICLE_H
#include "Showroom.h"
#include <iostream>
#include <string>
#include <vector>

class Vehicle
{
    private:
        std::string make;
        std::string model;
        int year;
        float price;
        int mileage;
    public:
        Vehicle(std::string make = "COP3503C", std::string model = "Rust Bucket", int year = 1900, float price = 0.0, int mileage = 0);
        void Display();
        std::string GetYearMakeModel();
        float GetPrice();
};





#endif