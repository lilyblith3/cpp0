#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>  

class Phonebook
{
    private:
        Contact count[8];
        int oldestIndex = 0;
        int numContacts = 0;
    public:
        void addContact(Contact c);
        void displayContacts();
        void displayCindex(int i);
        
};

#endif