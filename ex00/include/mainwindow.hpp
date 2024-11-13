#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <iostream>
#include <QMessageBox>
#include "Contact.hpp"

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

private slots:
    void addButtonPushed();
    void removeButtonPushed();
    void searchButtonPushed();
    void refreshButtonPushed();

public slots:
    void refresh(std::vector<Contact*> &contactList);
    void warningContactExists();
    void informationContactAdded();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
