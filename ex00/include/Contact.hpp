#pragma once

#include <iostream>

class Contact
{
private:
    std::string _name;
    std::string _email;
    unsigned int _phoneNumber;

public:
    Contact();
    ~Contact();
    Contact(const Contact& originalContact);
    Contact& operator=(const Contact& originalContact);

    void setName(const std::string &name);
    void setEmail(const std::string &email);
    void setPhoneNumber(unsigned int phoneNumber);

    const std::string &getName(void) const;
    const std::string &getEmail(void) const;
    unsigned int getPhoneNumber(void) const;
};