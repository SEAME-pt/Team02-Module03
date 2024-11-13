#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QMessageBox>
#include <iostream>
#include <QMessageBox>
#include "Contact.hpp"
#include "../src/ui_editContact.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void addContactSignal(Contact *contact);
    void removeContactSignal(const std::string& nameText, const std::string& emailtext, const std::string& phoneNumber);
    void refreshSignal();
    void editContactSignal(const std::string& nameText, const std::string& emailtext, const std::string& phoneNumber, const std::string& newName, const std::string& newEmail, const std::string& newPhone);

private slots:
    void addButtonPushed();
    void removeButtonPushed();
    void searchButtonPushed();
    void refreshButtonPushed();
    void editButtonPushed();

public slots:
    void refresh(std::vector<Contact*> &contactList);
    void warningContactExists();
    void informationContactAdded();
    void changedDataPushed();

private:
    Ui::MainWindow *ui;
    QDialog *editContactDialog;
    Ui::editContact *uiEditContact;
    Contact *placeholder;
};
#endif // MAINWINDOW_H
