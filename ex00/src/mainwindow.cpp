#include "../include/mainwindow.hpp"
#include "../ui/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->contactTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addButtonPushed);
    connect(ui->removeButton, &QPushButton::clicked, this, &MainWindow::removeButtonPushed);
    connect(ui->searchButton, &QPushButton::clicked, this, &MainWindow::searchButtonPushed);
    connect(ui->refreshButton, &QPushButton::clicked, this, &MainWindow::refreshButtonPushed);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addButtonPushed()
{
    QString nameText = ui->nameText->text();
    QString emailText = ui->emailText->text();
    QString phoneText = ui->phoneText->text();

    if (nameText.isEmpty() || phoneText.isEmpty() || emailText.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "All fields must be filled out.");
        return;
    }
    bool ok;
    long number = phoneText.toLong(&ok);
    if (!ok)
    {
        QMessageBox::warning(this, "Input Error", "Number must be a valid integer.");
        return;
    }

    Contact *contact = new Contact;
    contact->setName(nameText.toStdString());
    contact->setEmail(emailText.toStdString());
    contact->setPhoneNumber(phoneText.toStdString());

    emit addContactSignal(contact);
    emit refreshSignal();

    ui->nameText->clear();
    ui->emailText->clear();
    ui->phoneText->clear();
}

void MainWindow::removeButtonPushed()
{
    QList<QTableWidgetSelectionRange> selectedRange = ui->contactTable->selectedRanges();

    if (selectedRange.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "No contacts selected.");
        return;
    }
    for (QTableWidgetSelectionRange range : selectedRange)
    {
        for (int row = range.topRow(); row <= range.bottomRow(); row++)
        {
            QString nameText = ui->contactTable->item(row, 0)->text();
            QString emailText = ui->contactTable->item(row, 1)->text();
            QString phoneText = ui->contactTable->item(row, 2)->text();

            ui->contactTable->removeRow(row);
            emit removeContactSignal(nameText.toStdString(), emailText.toStdString(), phoneText.toStdString());
        }
    }
}

void MainWindow::searchButtonPushed()
{
    QString searchText = ui->filterText->text();
    QString searchFilter = ui->filterBox->currentText();
    for (int row = 0; row < ui->contactTable->rowCount(); row++)
    {
        bool match = false;
        if (searchFilter == "Name")
        {
            QTableWidgetItem *item = ui->contactTable->item(row, 0);
            if (item->text().contains(searchText))
                match = true;
        }
        else if (searchFilter == "Email")
        {
            QTableWidgetItem *item = ui->contactTable->item(row, 1);
            if (item->text().contains(searchText))
                match = true;
        }
        else if (searchFilter == "Phone number")
        {
            QTableWidgetItem *item = ui->contactTable->item(row, 2);
            if (item->text().contains(searchText))
                match = true;
        }
        else
         break;
        ui->contactTable->setRowHeight(row, match);
    }
}

void MainWindow::refreshButtonPushed()
{
    emit refreshSignal();
    ui->filterText->clear();
}

void MainWindow::refresh(std::vector<Contact*> &contactList)
{
    ui->contactTable->setRowCount(0);

    for (Contact *contact : contactList)
    {
        int row = ui->contactTable->rowCount();
        ui->contactTable->insertRow(row);
        ui->contactTable->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(contact->getName())));
        ui->contactTable->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(contact->getEmail())));
        ui->contactTable->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(contact->getPhoneNumber())));
    }
}

void MainWindow::warningContactExists()
{
    QMessageBox::warning(this, "Input incorrect", "Contact is already on list");
}

void MainWindow::informationContactAdded()
{
     QMessageBox::information(this, "Contact Added", "Contact was successfuly added to list.");
}