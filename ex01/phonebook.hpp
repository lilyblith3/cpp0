#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
    private:
        const static int MAX_CONTACTS = 8;
        Contact count[MAX_CONTACTS];
        int oldestIndex;
        int numContacts;

    public:
        Phonebook() : oldestIndex(0), numContacts(0) {}

        void addContact(Contact c);
        void displayContacts();
        void displayCindex(int i);
        int getNumContacts() const { return numContacts; }
};

#endif
