#include "ContactBook.h"

#include <iostream>
#include <string>
//constructor
Contact::Contact() : name("empty"), num("empty") {}

Contact::Contact(std::string nameContact, std::string number) : name(nameContact), num(number) {}

std::string Contact::getName()
{
    return name;
}

std::string Contact::getNumber()
{
    return num;
}

void Contact::display()
{
    std::cout << name << ", " << num << std::endl;
}

