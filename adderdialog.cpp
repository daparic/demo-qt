#include "adderdialog.h"
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include <iostream>

double addnum(double a, double b)
{
    if (a == b) {
        std::cout << "*** here ***\n";
        return 2*b;
    }
    return a + b;
}

AdderDialog::AdderDialog(QWidget *parent)
    : QDialog(parent)
{
    input1 = new QLineEdit(this);
    input2 = new QLineEdit(this);
    addButton = new QPushButton("Add", this);
    resultLabel = new QLabel("Result: ", this);

    QHBoxLayout *inputsLayout = new QHBoxLayout;
    inputsLayout->addWidget(input1);
    inputsLayout->addWidget(input2);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(inputsLayout);
    mainLayout->addWidget(addButton);
    mainLayout->addWidget(resultLabel);

    setLayout(mainLayout);
    setWindowTitle("Adder");

    connect(addButton, &QPushButton::clicked, this, &AdderDialog::addNumbers);
}

void AdderDialog::addNumbers() {
    bool ok1, ok2;
    double num1 = input1->text().toDouble(&ok1);
    double num2 = input2->text().toDouble(&ok2);

    if (ok1 && ok2) {
        double sum = addnum(num1, num2);
        resultLabel->setText("Result: " + QString::number(sum));
    } else {
        resultLabel->setText("Invalid input");
    }
}

