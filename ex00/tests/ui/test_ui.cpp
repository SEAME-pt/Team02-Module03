#include <QtTest/QtTest>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <QTableWidget>
#include "../../include/mainwindow.hpp"

class UITest : public QObject {
    Q_OBJECT

private slots:
    void initTestCase() {
        // Init before all tests
    }

    void cleanupTestCase() {
        // Cleanup after all tests
    }

    void testAddButtonClick() {
        MainWindow window;

        QLineEdit *nameText = window.findChild<QLineEdit *>("nameText");
        QLineEdit *emailText = window.findChild<QLineEdit *>("emailText");
        QLineEdit *phoneText = window.findChild<QLineEdit *>("phoneText");

        QVERIFY(nameText != nullptr);
        QVERIFY(emailText != nullptr);
        QVERIFY(phoneText != nullptr);
        nameText->setText("John Doe");
        emailText->setText("john.doe@example.com");
        phoneText->setText("12345678");

        QPushButton *button = window.findChild<QPushButton *>("addButton");

        QVERIFY(button != nullptr);  // Check that the button exists
        QTest::mouseClick(button, Qt::LeftButton);  // Simulate button click

        // Verify the expected outcome of clicking the button
        QCOMPARE(button->text(), "Add Contact");
    }

    void testRemoveButtonClick() {
        MainWindow window;

        QTableWidget *table = window.findChild<QTableWidget *>("contactTable");
        QVERIFY(table != nullptr);  // Ensure the table widget exists

        // Add a new item to the table (assuming the table has 2 columns for name and email)
        int row = table->rowCount();
        table->insertRow(row);  // Add a new row
        table->setItem(row, 0, new QTableWidgetItem("John Doe"));  // Name column
        table->setItem(row, 1, new QTableWidgetItem("john.doe@example.com"));  // Email column
        table->setItem(row, 2, new QTableWidgetItem("123456789"));  // Email column

        // Select the newly added item
        table->selectRow(row);

        QPushButton *button = window.findChild<QPushButton *>("removeButton");
        QVERIFY(button != nullptr);  // Check that the button exists
        QTest::mouseClick(button, Qt::LeftButton);  // Simulate button click

        // Verify the expected outcome of clicking the button
        QCOMPARE(button->text(), "Remove Contact");
    }

    void testSearchButtonClick() {
        MainWindow window;

        QPushButton *button = window.findChild<QPushButton *>("searchButton");

        QVERIFY(button != nullptr);  // Check that the button exists
        QTest::mouseClick(button, Qt::LeftButton);  // Simulate button click

        // Verify the expected outcome of clicking the button
        QCOMPARE(button->text(), "Search Contact");
    }

    void testRefreshButtonClick() {
        MainWindow window;
        QPushButton *button = window.findChild<QPushButton *>("refreshButton");

        QVERIFY(button != nullptr);  // Check that the button exists
        QTest::mouseClick(button, Qt::LeftButton);  // Simulate button click

        // Verify the expected outcome of clicking the button
        QCOMPARE(button->text(), "Reset");
    }

    void testNameTextEntry() {
        MainWindow window;
        QLineEdit *lineEdit = window.findChild<QLineEdit *>("nameText");

        QVERIFY(lineEdit != nullptr);  // Check that the line edit exists
        QTest::keyClicks(lineEdit, "Test Input");  // Simulate typing

        // Verify the expected text is in the QLineEdit
        QCOMPARE(lineEdit->text(), "Test Input");
    }

    void testEmailTextEntry() {
        MainWindow window;
        QLineEdit *lineEdit = window.findChild<QLineEdit *>("emailText");

        QVERIFY(lineEdit != nullptr);  // Check that the line edit exists
        QTest::keyClicks(lineEdit, "Test Input");  // Simulate typing

        // Verify the expected text is in the QLineEdit
        QCOMPARE(lineEdit->text(), "Test Input");
    }
};

QTEST_MAIN(UITest)
#include "test_ui.moc"
