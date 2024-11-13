#include <QApplication>
#include <QObject>
#include "../include/mainwindow.hpp"
#include "../include/ContactList.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ContactList contactList;

    contactList.createDatabase();

    QObject::connect(&w, &MainWindow::addContactSignal, &contactList, &ContactList::addContact);
    QObject::connect(&w, &MainWindow::refreshSignal, &contactList, &ContactList::sendContactList);
    QObject::connect(&contactList, &ContactList::sendContactListSignal, &w, &MainWindow::refresh);
    QObject::connect(&w, &MainWindow::removeContactSignal, &contactList, &ContactList::removeContact);
    QObject::connect(&contactList, &ContactList::contactAlreadyExists, &w, &MainWindow::warningContactExists);
    QObject::connect(&contactList, &ContactList::contactAdded, &w, &MainWindow::informationContactAdded);
    QObject::connect(&w, &MainWindow::editContactSignal, &contactList, &ContactList::editContact);

    w.refreshSignal();
    w.show();
    return a.exec();
}
