/********************************************************************************
** Form generated from reading UI file 'mainboletoswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINBOLETOSWINDOW_H
#define UI_MAINBOLETOSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainBoletosWindow
{
public:
    QWidget *centralWidget;
    QPushButton *agregar;
    QPushButton *cancelar;
    QPushButton *aceptar;
    QLineEdit *edit;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *resumen;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainBoletosWindow)
    {
        if (MainBoletosWindow->objectName().isEmpty())
            MainBoletosWindow->setObjectName(QStringLiteral("MainBoletosWindow"));
        MainBoletosWindow->resize(430, 377);
        centralWidget = new QWidget(MainBoletosWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        agregar = new QPushButton(centralWidget);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(350, 230, 75, 23));
        cancelar = new QPushButton(centralWidget);
        cancelar->setObjectName(QStringLiteral("cancelar"));
        cancelar->setGeometry(QRect(350, 260, 75, 23));
        aceptar = new QPushButton(centralWidget);
        aceptar->setObjectName(QStringLiteral("aceptar"));
        aceptar->setGeometry(QRect(350, 290, 75, 23));
        edit = new QLineEdit(centralWidget);
        edit->setObjectName(QStringLiteral("edit"));
        edit->setGeometry(QRect(10, 300, 331, 21));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 11, 291, 281));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(310, 10, 31, 281));
        resumen = new QPushButton(centralWidget);
        resumen->setObjectName(QStringLiteral("resumen"));
        resumen->setGeometry(QRect(350, 200, 75, 23));
        MainBoletosWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainBoletosWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 430, 21));
        MainBoletosWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainBoletosWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainBoletosWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainBoletosWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainBoletosWindow->setStatusBar(statusBar);

        retranslateUi(MainBoletosWindow);

        QMetaObject::connectSlotsByName(MainBoletosWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainBoletosWindow)
    {
        MainBoletosWindow->setWindowTitle(QApplication::translate("MainBoletosWindow", "MainBoletosWindow", 0));
        agregar->setText(QApplication::translate("MainBoletosWindow", "Agregar", 0));
        cancelar->setText(QApplication::translate("MainBoletosWindow", "Cancelar", 0));
        aceptar->setText(QApplication::translate("MainBoletosWindow", "Aceptar", 0));
        resumen->setText(QApplication::translate("MainBoletosWindow", "Resumen", 0));
    } // retranslateUi

};

namespace Ui {
    class MainBoletosWindow: public Ui_MainBoletosWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOLETOSWINDOW_H
