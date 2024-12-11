/********************************************************************************
** Form generated from reading UI file 'newentrywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWENTRYWINDOW_H
#define UI_NEWENTRYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewEntryWindow
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *UserEdit;
    QLabel *label_2;
    QLineEdit *ServiceEdit;
    QLineEdit *UrlEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *PasswordEdit;

    void setupUi(QDialog *NewEntryWindow)
    {
        if (NewEntryWindow->objectName().isEmpty())
            NewEntryWindow->setObjectName("NewEntryWindow");
        NewEntryWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(NewEntryWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        gridLayoutWidget = new QWidget(NewEntryWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(19, 19, 361, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        UserEdit = new QLineEdit(gridLayoutWidget);
        UserEdit->setObjectName("UserEdit");

        gridLayout->addWidget(UserEdit, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ServiceEdit = new QLineEdit(gridLayoutWidget);
        ServiceEdit->setObjectName("ServiceEdit");

        gridLayout->addWidget(ServiceEdit, 0, 1, 1, 1);

        UrlEdit = new QLineEdit(gridLayoutWidget);
        UrlEdit->setObjectName("UrlEdit");

        gridLayout->addWidget(UrlEdit, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        PasswordEdit = new QLineEdit(gridLayoutWidget);
        PasswordEdit->setObjectName("PasswordEdit");

        gridLayout->addWidget(PasswordEdit, 3, 1, 1, 1);


        retranslateUi(NewEntryWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewEntryWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewEntryWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewEntryWindow);
    } // setupUi

    void retranslateUi(QDialog *NewEntryWindow)
    {
        NewEntryWindow->setWindowTitle(QCoreApplication::translate("NewEntryWindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("NewEntryWindow", "URL", nullptr));
        label->setText(QCoreApplication::translate("NewEntryWindow", "Service", nullptr));
        label_3->setText(QCoreApplication::translate("NewEntryWindow", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("NewEntryWindow", "Passwort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewEntryWindow: public Ui_NewEntryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWENTRYWINDOW_H
