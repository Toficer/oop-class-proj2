/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_readFileD
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *readObjB;

    void setupUi(QDialog *readFileD)
    {
        if (readFileD->objectName().isEmpty())
            readFileD->setObjectName(QStringLiteral("readFileD"));
        readFileD->resize(315, 155);
        readFileD->setMinimumSize(QSize(315, 155));
        readFileD->setMaximumSize(QSize(315, 155));
        label = new QLabel(readFileD);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 301, 16));
        lineEdit = new QLineEdit(readFileD);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 301, 20));
        readObjB = new QPushButton(readFileD);
        readObjB->setObjectName(QStringLiteral("readObjB"));
        readObjB->setGeometry(QRect(10, 70, 301, 61));

        retranslateUi(readFileD);
        QObject::connect(readObjB, SIGNAL(clicked()), readFileD, SLOT(close()));

        QMetaObject::connectSlotsByName(readFileD);
    } // setupUi

    void retranslateUi(QDialog *readFileD)
    {
        readFileD->setWindowTitle(QApplication::translate("readFileD", "File managment", Q_NULLPTR));
        label->setText(QApplication::translate("readFileD", "Please enter the file name (must be in the program's directory)", Q_NULLPTR));
        readObjB->setText(QApplication::translate("readFileD", "READ/WRITE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class readFileD: public Ui_readFileD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
