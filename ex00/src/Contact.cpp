#include "../include/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact(const Contact& originalContact)
{
    this->_name = originalContact._name;
    this->_email = originalContact._email;
    this->_phoneNumber = originalContact._phoneNumber;
}

Contact& Contact::operator=(const Contact& originalContact)
{
    if (this != &originalContact)
    {
        this->_name = originalContact._name;
        this->_email = originalContact._email;
        this->_phoneNumber = originalContact._phoneNumber;
    }
    return *this;
}

void Contact::setName(const std::string& name)
{
    this->_name = name;
}

void Contact::setEmail(const std::string& email)
{
    this->_email = email;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

const std::string& Contact::getName(void) const
{
    return this->_name;
}


const std::string& Contact::getEmail(void) const
{
    return this->_email;
}


const std::string& Contact::getPhoneNumber(void) const
{
    return this->_phoneNumber;
}