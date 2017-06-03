/********************************************************************************
** Form generated from reading UI file 'creationWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONWINDOW_H
#define UI_CREATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_creationWindow
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *diameterEdit;
    QLabel *label_3;
    QLineEdit *ageEdit;
    QLabel *label_4;
    QLineEdit *starEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *armEdit;
    QLineEdit *lifeEdit;
    QPushButton *createObjB;

    void setupUi(QDialog *creationWindow)
    {
        if (creationWindow->objectName().isEmpty())
            creationWindow->setObjectName(QStringLiteral("creationWindow"));
        creationWindow->resize(241, 398);
        creationWindow->setMinimumSize(QSize(241, 398));
        creationWindow->setMaximumSize(QSize(241, 398));
        listWidget = new QListWidget(creationWindow);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 30, 241, 91));
        QFont font;
        font.setPointSize(14);
        listWidget->setFont(font);
        label = new QLabel(creationWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 0, 81, 31));
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);
        label_2 = new QLabel(creationWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 131, 20));
        diameterEdit = new QLineEdit(creationWindow);
        diameterEdit->setObjectName(QStringLiteral("diameterEdit"));
        diameterEdit->setGeometry(QRect(0, 140, 241, 20));
        label_3 = new QLabel(creationWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 160, 131, 20));
        ageEdit = new QLineEdit(creationWindow);
        ageEdit->setObjectName(QStringLiteral("ageEdit"));
        ageEdit->setGeometry(QRect(0, 180, 241, 20));
        label_4 = new QLabel(creationWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 200, 121, 20));
        starEdit = new QLineEdit(creationWindow);
        starEdit->setObjectName(QStringLiteral("starEdit"));
        starEdit->setGeometry(QRect(0, 220, 241, 20));
        label_5 = new QLabel(creationWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 240, 121, 20));
        label_6 = new QLabel(creationWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 280, 181, 20));
        armEdit = new QLineEdit(creationWindow);
        armEdit->setObjectName(QStringLiteral("armEdit"));
        armEdit->setGeometry(QRect(0, 260, 241, 20));
        lifeEdit = new QLineEdit(creationWindow);
        lifeEdit->setObjectName(QStringLiteral("lifeEdit"));
        lifeEdit->setGeometry(QRect(0, 300, 241, 20));
        createObjB = new QPushButton(creationWindow);
        createObjB->setObjectName(QStringLiteral("createObjB"));
        createObjB->setGeometry(QRect(-6, 322, 251, 81));

        retranslateUi(creationWindow);
        QObject::connect(createObjB, SIGNAL(clicked()), creationWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(creationWindow);
    } // setupUi

    void retranslateUi(QDialog *creationWindow)
    {
        creationWindow->setWindowTitle(QApplication::translate("creationWindow", "Object Creation", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("creationWindow", "Cosmic Void", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("creationWindow", "Galaxy", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("creationWindow", "SpiralGalaxy", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("creationWindow", "Object type:", Q_NULLPTR));
        label_2->setText(QApplication::translate("creationWindow", "Diameter (ly) (1 - 300000):", Q_NULLPTR));
        label_3->setText(QApplication::translate("creationWindow", "Age (M years) (1 - 50000):", Q_NULLPTR));
        label_4->setText(QApplication::translate("creationWindow", "Star count (1 - 350000):", Q_NULLPTR));
        label_5->setText(QApplication::translate("creationWindow", "Number of arms (1 - 10):", Q_NULLPTR));
        label_6->setText(QApplication::translate("creationWindow", "Alien life (0 - absent, else - present)", Q_NULLPTR));
        createObjB->setText(QApplication::translate("creationWindow", "CREATE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class creationWindow: public Ui_creationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONWINDOW_H
