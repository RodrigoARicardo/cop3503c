#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include <string>


class Contact
{
    private:
        std::string name;
        std::string num;
    public:
        Contact();
        Contact(std::string name, std::string number);
        std::string getName();
        std::string getNumber();
        void display();
};

class ContactBook
{
    private:
    static const int MAX_SIZE = 100;
    Contact* contacts[MAX_SIZE];
    unsigned int curr_size = 0;

    public:
    std::string* find(std::string);
    void add(Contact* c);
    void addContacts(std::vector<Contact *> vc);
    void remove(Contact c);
    void display();
    void Alphabetize();

};


#endif