/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *OpenButton;
    QAction *ImportButton;
    QAction *ExportButton;
    QAction *QuitButton;
    QAction *FullscreenButton;
    QAction *SettingsButton;
    QAction *NewButton;
    QWidget *centralwidget;
    QTreeView *treeView;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuDatei;
    QMenu *menuAnsicht;
    QMenu *menuExtras;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        OpenButton = new QAction(MainWindow);
        OpenButton->setObjectName("OpenButton");
        ImportButton = new QAction(MainWindow);
        ImportButton->setObjectName("ImportButton");
        ExportButton = new QAction(MainWindow);
        ExportButton->setObjectName("ExportButton");
        QuitButton = new QAction(MainWindow);
        QuitButton->setObjectName("QuitButton");
        FullscreenButton = new QAction(MainWindow);
        FullscreenButton->setObjectName("FullscreenButton");
        SettingsButton = new QAction(MainWindow);
        SettingsButton->setObjectName("SettingsButton");
        NewButton = new QAction(MainWindow);
        NewButton->setObjectName("NewButton");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(5, 41, 211, 491));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(245, 41, 551, 491));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        menuDatei = new QMenu(menubar);
        menuDatei->setObjectName("menuDatei");
        menuAnsicht = new QMenu(menubar);
        menuAnsicht->setObjectName("menuAnsicht");
        menuExtras = new QMenu(menubar);
        menuExtras->setObjectName("menuExtras");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDatei->menuAction());
        menubar->addAction(menuAnsicht->menuAction());
        menubar->addAction(menuExtras->menuAction());
        menuDatei->addAction(NewButton);
        menuDatei->addAction(OpenButton);
        menuDatei->addSeparator();
        menuDatei->addAction(ImportButton);
        menuDatei->addAction(ExportButton);
        menuDatei->addSeparator();
        menuDatei->addAction(QuitButton);
        menuAnsicht->addAction(FullscreenButton);
        menuExtras->addAction(SettingsButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        OpenButton->setText(QCoreApplication::translate("MainWindow", "\303\226ffnen", nullptr));
        ImportButton->setText(QCoreApplication::translate("MainWindow", "Importieren", nullptr));
        ExportButton->setText(QCoreApplication::translate("MainWindow", "Exportieren", nullptr));
        QuitButton->setText(QCoreApplication::translate("MainWindow", "Beenden", nullptr));
        FullscreenButton->setText(QCoreApplication::translate("MainWindow", "Vollbild", nullptr));
        SettingsButton->setText(QCoreApplication::translate("MainWindow", "Einstellungen", nullptr));
        NewButton->setText(QCoreApplication::translate("MainWindow", "Neu", nullptr));
        menuDatei->setTitle(QCoreApplication::translate("MainWindow", "Datei", nullptr));
        menuAnsicht->setTitle(QCoreApplication::translate("MainWindow", "Ansicht", nullptr));
        menuExtras->setTitle(QCoreApplication::translate("MainWindow", "Extras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
