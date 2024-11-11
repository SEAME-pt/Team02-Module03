#pragma once

#include <iostream>
#include <vector>
#include "./Contact.hpp"

class ContactList
{
private:
    std::vector<Contact*> _contactList;

public:
    ContactList();
    ~ContactList();
    ContactList(const ContactList& originalContactList);
    ContactList& operator=(const ContactList& originalContactList);

    void addContact(Contact &contactToAdd);
    void removeContact(unsigned int phoneNumber);
    Contact* searchContact(unsigned int phoneNumber);
};
