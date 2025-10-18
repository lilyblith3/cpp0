#include "phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

// constructor khdmto -> initialize objects of that class when they r created 
int main()
{
    Phonebook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            std::string prompts[5] = {
                "First Name",
                "Last Name",
                "Nickname",
                "Phone Number",
                "Darkest Secret"
            };
            std::string inputs[5];
            for (int i = 0; i < 5; i++)
            {
                do
                {
                    std::cout << "Enter " << prompts[i] << ": ";
                    std::getline(std::cin, inputs[i]);
                } while (inputs[i].empty());
            }
            Contact newContact;
            newContact.setContactData(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
            phonebook.addContact(newContact);
            std::cout << "Contact added!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            if (phonebook.getNumContacts() == 0)
            {
                std::cout << "Phonebook is empty!" << std::endl;
                continue;
            }
            phonebook.displayContacts();
        
            int index = -1;
            std::cout << "Enter the index of the contact to display: ";
            std::cin >> index;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                index = -1;
            }
            else
                std::cin.ignore();            
            phonebook.displayCindex(index);
        }
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}
