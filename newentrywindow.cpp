#include "newentrywindow.h"
#include "ui_newentrywindow.h"

#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QDebug>

NewEntryWindow::NewEntryWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewEntryWindow)
{
    ui->setupUi(this);
}

NewEntryWindow::~NewEntryWindow()
{
    delete ui;
}

void NewEntryWindow::on_buttonBox_accepted()
{
    QString service = ui->ServiceEdit->text();
    QString url = ui->UrlEdit->text();
    QString user = ui->UserEdit->text();
    QString password = ui->PasswordEdit->text();

    QFile file("/Users/phil/Documents/dev/data.txt");


    if(file.open(QIODevice::WriteOnly)) {
        QTextStream stream(&file);
        stream << "hallo" << Qt::endl;
        qDebug("Datei gespeichert!");
    }

}

