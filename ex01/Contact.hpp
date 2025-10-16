#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void setContactData(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret);
        void displayFullContact() const;
        void displayBriefContact() const;

};

#endif

