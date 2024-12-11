#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "newentrywindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_NewButton_triggered()
{
    QWidget *newWindow = new NewEntryWindow;
    newWindow->show();
}

