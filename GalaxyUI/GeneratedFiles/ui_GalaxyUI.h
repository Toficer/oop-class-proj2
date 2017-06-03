/********************************************************************************
** Form generated from reading UI file 'GalaxyUI.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GALAXYUI_H
#define UI_GALAXYUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GalaxyUIClass
{
public:
    QWidget *centralWidget;
    QTextEdit *textWindow;
    QPushButton *numberB;
    QPushButton *saveB;
    QPushButton *readB;
    QPushButton *deleteB;
    QPushButton *createB;
    QPushButton *descriptionB;
    QPushButton *listB;
    QPushButton *exitB;
    QListWidget *listWidget;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GalaxyUIClass)
    {
        if (GalaxyUIClass->objectName().isEmpty())
            GalaxyUIClass->setObjectName(QStringLiteral("GalaxyUIClass"));
        GalaxyUIClass->resize(1000, 633);
        GalaxyUIClass->setMinimumSize(QSize(1000, 633));
        GalaxyUIClass->setMaximumSize(QSize(1000, 633));
        centralWidget = new QWidget(GalaxyUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textWindow = new QTextEdit(centralWidget);
        textWindow->setObjectName(QStringLiteral("textWindow"));
        textWindow->setGeometry(QRect(0, 0, 751, 461));
        textWindow->setMinimumSize(QSize(751, 461));
        textWindow->setMaximumSize(QSize(751, 461));
        QFont font;
        font.setPointSize(12);
        textWindow->setFont(font);
        textWindow->setStyleSheet(QStringLiteral(""));
        numberB = new QPushButton(centralWidget);
        numberB->setObjectName(QStringLiteral("numberB"));
        numberB->setGeometry(QRect(0, 460, 250, 61));
        saveB = new QPushButton(centralWidget);
        saveB->setObjectName(QStringLiteral("saveB"));
        saveB->setGeometry(QRect(0, 520, 250, 61));
        readB = new QPushButton(centralWidget);
        readB->setObjectName(QStringLiteral("readB"));
        readB->setGeometry(QRect(250, 460, 250, 61));
        deleteB = new QPushButton(centralWidget);
        deleteB->setObjectName(QStringLiteral("deleteB"));
        deleteB->setGeometry(QRect(250, 520, 250, 61));
        createB = new QPushButton(centralWidget);
        createB->setObjectName(QStringLiteral("createB"));
        createB->setGeometry(QRect(500, 460, 250, 61));
        descriptionB = new QPushButton(centralWidget);
        descriptionB->setObjectName(QStringLiteral("descriptionB"));
        descriptionB->setGeometry(QRect(500, 520, 250, 61));
        listB = new QPushButton(centralWidget);
        listB->setObjectName(QStringLiteral("listB"));
        listB->setGeometry(QRect(750, 460, 250, 61));
        exitB = new QPushButton(centralWidget);
        exitB->setObjectName(QStringLiteral("exitB"));
        exitB->setGeometry(QRect(750, 520, 250, 61));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(750, 281, 251, 181));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(749, -1, 251, 251));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 2, 241, 251));
        label->setPixmap(QPixmap(QString::fromUtf8("galaxy.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(850, 260, 61, 20));
        GalaxyUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GalaxyUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 21));
        GalaxyUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GalaxyUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GalaxyUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GalaxyUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GalaxyUIClass->setStatusBar(statusBar);

        retranslateUi(GalaxyUIClass);
        QObject::connect(exitB, SIGNAL(clicked()), GalaxyUIClass, SLOT(close()));
        QObject::connect(listB, SIGNAL(clicked()), GalaxyUIClass, SLOT(displayAll()));
        QObject::connect(listWidget, SIGNAL(itemPressed(QListWidgetItem*)), GalaxyUIClass, SLOT(imageDisplay()));
        QObject::connect(descriptionB, SIGNAL(clicked()), GalaxyUIClass, SLOT(displaySelected()));
        QObject::connect(createB, SIGNAL(clicked()), GalaxyUIClass, SLOT(openCreator()));
        QObject::connect(deleteB, SIGNAL(clicked()), GalaxyUIClass, SLOT(deleteObject()));
        QObject::connect(numberB, SIGNAL(clicked()), GalaxyUIClass, SLOT(objectCount()));
        QObject::connect(readB, SIGNAL(clicked()), GalaxyUIClass, SLOT(openReading()));
        QObject::connect(saveB, SIGNAL(clicked()), GalaxyUIClass, SLOT(openWriting()));

        QMetaObject::connectSlotsByName(GalaxyUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GalaxyUIClass)
    {
        GalaxyUIClass->setWindowTitle(QApplication::translate("GalaxyUIClass", "GalaxyUI", Q_NULLPTR));
        numberB->setText(QApplication::translate("GalaxyUIClass", "NUMBER OF OBJECTS", Q_NULLPTR));
        saveB->setText(QApplication::translate("GalaxyUIClass", "SAVE AN OBJECT TO FILE", Q_NULLPTR));
        readB->setText(QApplication::translate("GalaxyUIClass", "READ AN OBJECT FROM FILE", Q_NULLPTR));
        deleteB->setText(QApplication::translate("GalaxyUIClass", "DELETE THE LAST OBJECT", Q_NULLPTR));
        createB->setText(QApplication::translate("GalaxyUIClass", "CREATE A NEW OBJECT", Q_NULLPTR));
        descriptionB->setText(QApplication::translate("GalaxyUIClass", "VIEW OBJECT DESCRIPTION", Q_NULLPTR));
        listB->setText(QApplication::translate("GalaxyUIClass", "LIST ALL OBJECTS", Q_NULLPTR));
        exitB->setText(QApplication::translate("GalaxyUIClass", "EXIT", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("GalaxyUIClass", "galaxy", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("GalaxyUIClass", "cosmic void", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("GalaxyUIClass", "spiral galaxy", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QString());
        label_2->setText(QApplication::translate("GalaxyUIClass", "OBJECTS:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GalaxyUIClass: public Ui_GalaxyUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GALAXYUI_H
