#include <gtest/gtest.h>
#include "../include/Contact.hpp"

// Test case
TEST(CopyContructorTest, settersTest) {
    Contact contact;

    contact.setName("Myke");
    contact.setEmail("Myke@gmail.com");
    contact.setPhoneNumber("123456789");
    Contact contactCopy(contact);
    EXPECT_EQ(contactCopy.getName(), "Myke");
    EXPECT_EQ(contactCopy.getEmail(), "Myke@gmail.com");
    EXPECT_EQ(contactCopy.getPhoneNumber(), "123456789");
}
