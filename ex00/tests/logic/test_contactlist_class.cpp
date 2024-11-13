#include <gtest/gtest.h>
#include "../../include/ContactList.hpp"
#include "../../include/Contact.hpp"
#include <QSignalSpy>
#include <vector>

// Test case for the creation database
TEST(CreateCSVTest, FileCreationAndContentCheck) {
    Contact *newContact = new Contact;
    newContact->setName("Rui");
    newContact->setEmail("ruipedro.pires999@gmail.com");
    newContact->setPhoneNumber("123456789");

    Contact *newContact1 = new Contact;

    ContactList contactList;
    contactList.addContact(newContact);
    contactList.addContact(newContact1);
    contactList.createDatabase();

    // Step 1: Check if the file was created
    ASSERT_TRUE(std::filesystem::exists("database.csv")) << "CSV file was not created";

    // Step 2: Open and read the file content
    std::ifstream csvFile("database.csv");
    ASSERT_TRUE(csvFile.is_open()) << "Failed to open the CSV file";

    // Read the contents and validate them
    std::string line;
    std::getline(csvFile, line);
    EXPECT_EQ(line, "Rui,ruipedro.pires999@gmail.com,123456789");

    std::getline(csvFile, line);
    EXPECT_EQ(line, ",,");

    csvFile.close();

    // Step 3: Clean up by removing the test file after the test
    std::filesystem::remove("database.csv");
}

// Test case
TEST(RemoveContactFromDatabase, removeContact) {
    Contact *newContact = new Contact;
    newContact->setName("Rui");
    newContact->setEmail("ruipedro.pires999@gmail.com");
    newContact->setPhoneNumber("123456789");

    Contact *newContact1 = new Contact;

    ContactList contactList;
    contactList.addContact(newContact);
    contactList.addContact(newContact1);
    contactList.createDatabase();

    contactList.removeContact("Rui", "ruipedro.pires999@gmail.com", "123456789");

    // Step 1: Check if the file was created
    ASSERT_TRUE(std::filesystem::exists("database.csv")) << "CSV file was not created";

    // Step 2: Open and read the file content
    std::ifstream csvFile("database.csv");
    ASSERT_TRUE(csvFile.is_open()) << "Failed to open the CSV file";

    std::string line;
    std::getline(csvFile, line);
    EXPECT_EQ(line, ",,");

    csvFile.close();

    // Step 3: Clean up by removing the test file after the test
    std::filesystem::remove("database.csv");
}

TEST(contactAddedSignalTest, SignalEmittedTest) {
    ContactList contactList;
    QSignalSpy spy(&contactList, &ContactList::contactAdded);

    contactList.contactAdded();

    EXPECT_EQ(spy.count(), 1);
}

TEST(contactAlreadyExistsSignalTest, SignalEmittedTest) {
    ContactList contactList;
    QSignalSpy spy(&contactList, &ContactList::contactAlreadyExists);

    contactList.contactAlreadyExists();

    EXPECT_EQ(spy.count(), 1);
}


TEST(sendContactListSignalTest, SignalEmittedTest) {
    Contact *newContact = new Contact;
    newContact->setName("Rui");
    newContact->setEmail("ruipedro.pires999@gmail.com");
    newContact->setPhoneNumber("123456789");

    Contact *newContact1 = new Contact;

    std::vector<Contact*> contactVector;

    ContactList contactList;
    QSignalSpy spy(&contactList, &ContactList::sendContactListSignal);

    contactList.sendContactListSignal(contactVector);

    EXPECT_EQ(spy.count(), 1);
}