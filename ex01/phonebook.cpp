#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>


void Phonebook::addContact(Contact c)
{
    int newConact = 0;
    
    if (numContacts < 8)
        newConact = numContacts;
    else
        newConact = oldestIndex;
    count[newConact] = c;       
}