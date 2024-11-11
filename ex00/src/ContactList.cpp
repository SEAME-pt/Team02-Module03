#include "../include/ContactList.hpp"

ContactList::ContactList()
{
}

ContactList::~ContactList()
{
    for (std::vector<Contact*>::iterator it = this->_contactList.begin(); it != this->_contactList.end(); it++)
    {
        delete *it;
        this->_contactList.erase(it);
    }
}

ContactList::ContactList(const ContactList& originalContactList)
{
    this->_contactList = originalContactList._contactList;
}

ContactList& ContactList::operator=(const ContactList& originalContactList)
{
    if (this != &originalContactList)
        this->_contactList = originalContactList._contactList;
    return *this;
}

void ContactList::addContact(Contact& contact)
{
    this->_contactList.push_back(new Contact(contact));
}

void ContactList::removeContact(unsigned int phoneNumber)
{
    for (std::vector<Contact*>::iterator it = this->_contactList.begin(); it != this->_contactList.end(); it++)
    {
        if ((*it)->getPhoneNumber() == phoneNumber)
        {
            delete *it;
            this->_contactList.erase(it);
        }
    }
}


Contact* ContactList::searchContact(unsigned int phoneNumber)
{
    for (std::vector<Contact*>::iterator it = this->_contactList.begin(); it != this->_contactList.end(); it++)
    {
        if ((*it)->getPhoneNumber() == phoneNumber)
            return *it;
    }
}