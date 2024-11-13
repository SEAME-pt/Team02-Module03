#include <gtest/gtest.h>
#include "../../include/Contact.hpp"

// Test case

TEST(GettersTest, empty) {
    Contact contact;
    
    EXPECT_EQ(contact.getName(), "");
    EXPECT_EQ(contact.getEmail(), "");
    EXPECT_EQ(contact.getPhoneNumber(), "");
}

TEST(GettersandSettersTest, filled) {
    Contact contact;
    contact.setName("Myke");
    contact.setEmail("Myke@gmail.com");
    contact.setPhoneNumber("123456789");

    EXPECT_EQ(contact.getName(), "Myke");
    EXPECT_EQ(contact.getEmail(), "Myke@gmail.com");
    EXPECT_EQ(contact.getPhoneNumber(), "123456789");
}

TEST(CopyContructor, settersandgetters) {
    Contact contact;
    contact.setName("Myke");
    contact.setEmail("Myke@gmail.com");
    contact.setPhoneNumber("123456789");
    
    Contact contactCopy(contact);
    
    EXPECT_EQ(contactCopy.getName(), "Myke");
    EXPECT_EQ(contactCopy.getEmail(), "Myke@gmail.com");
    EXPECT_EQ(contactCopy.getPhoneNumber(), "123456789");
}

TEST(AssignmentOperator, settersandgetters) {
    Contact contact;
    contact.setName("Myke");
    contact.setEmail("Myke@gmail.com");
    contact.setPhoneNumber("123456789");
    
    Contact contactCopy = contact;

    EXPECT_EQ(contactCopy.getName(), "Myke");
    EXPECT_EQ(contactCopy.getEmail(), "Myke@gmail.com");
    EXPECT_EQ(contactCopy.getPhoneNumber(), "123456789");

    contact.setName("Rui");
    EXPECT_EQ(contactCopy.getName(), "Myke");
}
