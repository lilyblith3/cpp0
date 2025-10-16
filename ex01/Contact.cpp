#include "Contact.hpp"
#include <iostream>  
#include <iomanip>

//=========================thing I will learn later======================================//
//scope resolution operator :: it tells the compiler look inside this class or namespace It connects a function or variable to its class or namespace.
/*
1- std
2- >> << 
3- classes / object
*/
//=======================================================================================//

void Contact::setContactData(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret)
{
    firstName = fName;
    lastName = lName;
    nickName = nName;
    phoneNumber = pNumber;
    darkestSecret = dSecret;
}

void Contact::displayFullContact() const
{
    std::cout << "First Name : " << firstName << std::endl;
    std::cout << "Last Name : " << lastName << std::endl;
    std::cout << "Nick Name: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Dark Secret: " << darkestSecret << std::endl;
}

void Contact::displayBriefContact() const
{
    std::string fields[3] = {firstName, lastName, nickName};

    for (int i = 0; i < 3; i++)
    {
        if (fields[i].length() > 10)
        {
            std::string tmp = fields[i].substr(0, 9) + '.';
            std::cout << std::setw(10) << tmp << "|";
        }
        else
        {
            std::cout << std::setw(10) << fields[i] << "|";
        }
    }
    std::cout << std::endl;
}
