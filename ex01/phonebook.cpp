#include "phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>


void Phonebook::addContact(Contact c)
{
    int newConact = 0;
    if (numContacts < MAX_CONTACTS)
    {
        newConact = numContacts;
        numContacts++;
    }
    else
    {
        newConact = oldestIndex;
        oldestIndex  = (oldestIndex + 1) % MAX_CONTACTS;      
    }
    count[newConact] = c; 
}

void Phonebook::displayContacts()
{

        std::cout << std::setw(10) << "Index" << "|"
        << std::setw(10) << "First Name" << "|"
        << std::setw(10) << "Last Name" << "|"
        << std::setw(10) << "Nickname" << std::endl;

        for (int i = 0; i < numContacts; i++)
        {
            std::cout << std::setw(10) << i << "|";
            count[i].displayBriefContact();
        }
}

void Phonebook::displayCindex(int i)
 {
    if (i < 0 || i >= numContacts)
    {
        std::cout << "Invalid Index"<< std::endl;
    }
    else
        count[i].displayFullContact();
 }