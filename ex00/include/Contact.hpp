#pragma once

#include <iostream>

class Contact
{
private:
    std::string _name;
    std::string _email;
    std::string _phoneNumber;

public:
    Contact();
    ~Contact();
    Contact(const Contact& originalContact);
    Contact& operator=(const Contact& originalContact);

    void setName(const std::string &name);
    void setEmail(const std::string &email);
    void setPhoneNumber(const std::string &phoneNumber);

    const std::string &getName(void) const;
    const std::string &getEmail(void) const;
    const std::string &getPhoneNumber(void) const;
};