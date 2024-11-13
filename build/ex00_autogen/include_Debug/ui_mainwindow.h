/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addButton;
    QTableWidget *contactTable;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QLabel *phoneLabel;
    QPushButton *removeButton;
    QPushButton *searchButton;
    QLineEdit *nameText;
    QLineEdit *emailText;
    QLineEdit *phoneText;
    QPushButton *refreshButton;
    QComboBox *filterBox;
    QLineEdit *filterText;
    QLabel *filterLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(650, 50, 111, 31));
        contactTable = new QTableWidget(centralwidget);
        if (contactTable->columnCount() < 3)
            contactTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        contactTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        contactTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        contactTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        contactTable->setObjectName("contactTable");
        contactTable->setGeometry(QRect(30, 220, 731, 331));
        contactTable->setFrameShape(QFrame::Shape::StyledPanel);
        contactTable->setFrameShadow(QFrame::Shadow::Sunken);
        contactTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        contactTable->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        contactTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        contactTable->setGridStyle(Qt::PenStyle::SolidLine);
        contactTable->setSortingEnabled(true);
        contactTable->setColumnCount(3);
        contactTable->horizontalHeader()->setCascadingSectionResizes(false);
        contactTable->horizontalHeader()->setDefaultSectionSize(100);
        contactTable->horizontalHeader()->setHighlightSections(true);
        contactTable->horizontalHeader()->setStretchLastSection(false);
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(40, 30, 49, 16));
        emailLabel = new QLabel(centralwidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(250, 30, 49, 16));
        phoneLabel = new QLabel(centralwidget);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(460, 30, 91, 16));
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(650, 560, 111, 31));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(310, 170, 111, 31));
        nameText = new QLineEdit(centralwidget);
        nameText->setObjectName("nameText");
        nameText->setGeometry(QRect(40, 50, 151, 31));
        emailText = new QLineEdit(centralwidget);
        emailText->setObjectName("emailText");
        emailText->setGeometry(QRect(250, 50, 151, 31));
        phoneText = new QLineEdit(centralwidget);
        phoneText->setObjectName("phoneText");
        phoneText->setGeometry(QRect(460, 50, 151, 31));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(650, 180, 111, 31));
        filterBox = new QComboBox(centralwidget);
        filterBox->addItem(QString());
        filterBox->addItem(QString());
        filterBox->addItem(QString());
        filterBox->setObjectName("filterBox");
        filterBox->setGeometry(QRect(40, 170, 111, 31));
        filterText = new QLineEdit(centralwidget);
        filterText->setObjectName("filterText");
        filterText->setGeometry(QRect(160, 170, 141, 31));
        filterLabel = new QLabel(centralwidget);
        filterLabel->setObjectName("filterLabel");
        filterLabel->setGeometry(QRect(40, 150, 49, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PhoneBook", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add Contact", nullptr));
        QTableWidgetItem *___qtablewidgetitem = contactTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = contactTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = contactTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        emailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        phoneLabel->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Remove Contact", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search Contact", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        filterBox->setItemText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        filterBox->setItemText(1, QCoreApplication::translate("MainWindow", "Email", nullptr));
        filterBox->setItemText(2, QCoreApplication::translate("MainWindow", "Phone number", nullptr));

        filterBox->setCurrentText(QString());
        filterBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Filter by", nullptr));
        filterLabel->setText(QCoreApplication::translate("MainWindow", "Filter by", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
