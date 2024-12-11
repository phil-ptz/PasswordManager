#ifndef NEWENTRYWINDOW_H
#define NEWENTRYWINDOW_H

#include <QDialog>

namespace Ui {
class NewEntryWindow;
}

class NewEntryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NewEntryWindow(QWidget *parent = nullptr);
    ~NewEntryWindow();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::NewEntryWindow *ui;
};

#endif // NEWENTRYWINDOW_H
