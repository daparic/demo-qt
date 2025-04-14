#ifndef ADDERDIALOG_H
#define ADDERDIALOG_H

#include <QDialog>

class QLineEdit;
class QLabel;
class QPushButton;

class AdderDialog : public QDialog {
    Q_OBJECT

public:
    AdderDialog(QWidget *parent = nullptr);

private slots:
    void addNumbers();

private:
    QLineEdit *input1;
    QLineEdit *input2;
    QLabel *resultLabel;
    QPushButton *addButton;
};

#endif // ADDERDIALOG_H

