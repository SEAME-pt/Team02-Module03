#include "../include/ContactList.hpp"

ContactList::ContactList(QObject *parent) : QObject(parent), _database("database.csv")
{
}

ContactList::~ContactList()
{
    for (std::vector<Contact*>::iterator it = this->_contactList.begin(); it != this->_contactList.end(); it++)
    {
        delete *it;
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

void ContactList::createDatabase()
{
    // std::fstream file;
    // std::string line;
    // std::string name;
    // std::string email;
    // std::string phone;

    // file.open(this->_database, std::ios::in);
    // while (!file.eof())
    // {
    //     std::getline(file, line);
    //     std::stringstream ss(line);
    //     std::getline(ss, name, ',');
    //     std::getline(ss, email, ',');
    //     std::getline(ss, phone);
    //     Contact *newContact = new Contact;
    //     newContact->setName(name);
    //     newContact->setEmail(email);
    //     newContact->setPhoneNumber(phone);
    //     this->addContact(newContact);
    // }
    // file.close();
}

void ContactList::addContact(Contact *contact)
{
    this->_contactList.push_back(contact);
    // std::ofstream outFile;

    // outFile.open(this->_database, std::ios::app);
    // outFile << contact->getName() << ","
    //     << contact->getEmail() << ","
    //     << contact->getPhoneNumber() << "\n";
    // outFile.close();
}

void ContactList::removeContact(const std::string& nameText, const std::string& emailtext, const std::string& phoneNumber)
{
    // std::ifstream inFile;
    // std::ofstream outFile;
    // std::string line;
    // std::string name;
    // std::string email;
    // std::string phone;

    // inFile.open(this->_database);
    // outFile.open("temp.csv");
    // while (!inFile.eof())
    // {
    //     std::getline(inFile, line);
    //     std::stringstream ss(line);
    //     std::getline(ss, name, ',');
    //     std::getline(ss, email, ',');
    //     std::getline(ss, phone);
    //     if (name != nameText || email != emailtext || phone != phoneNumber)
    //         outFile << line << std::endl;
    // }

    // inFile.close();
    // outFile.close();

    // std::remove(this->_database.c_str());
    // std::rename("temp.csv", this->_database.c_str());

    for (auto it = this->_contactList.begin(); it != this->_contactList.end(); it++)
    {
        if ((*it)->getName() == nameText && (*it)->getEmail() == emailtext && (*it)->getPhoneNumber() == phoneNumber)
        {
            delete *it;
            this->_contactList.erase(it);
            break;
        }
    }
}

void ContactList::sendContactList(void)
{
    emit sendContactListSignal(this->_contactList);
}