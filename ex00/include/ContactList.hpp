#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <QObject>
#include "./Contact.hpp"

class ContactList : public QObject
{
    Q_OBJECT

private:
    std::vector<Contact*> _contactList;
    const std::string _database; 

public:
    ContactList(QObject *parent = nullptr);
    ~ContactList();
    ContactList(const ContactList& originalContactList);
    ContactList& operator=(const ContactList& originalContactList);

    void createDatabase();

signals:
    void sendContactListSignal(std::vector<Contact*> &contactList);
    void contactAlreadyExists(void);
    void contactAdded(void);

public slots:
    void addContact(Contact *contact);
    void removeContact(const std::string& nameText, const std::string& emailtext, const std::string& phoneNumber);
    void sendContactList(void);
    void editContact(const std::string& nameText, const std::string& emailtext, const std::string& phoneNumber);
};
