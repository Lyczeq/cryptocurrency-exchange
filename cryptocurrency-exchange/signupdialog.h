#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include <QDialog>

namespace Ui {
class signUpDialog;
}

class signUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit signUpDialog(QWidget *parent = nullptr);
    ~signUpDialog();

private slots:
    void on_goBackButton_clicked();

    void on_signUpButton_clicked();

private:
    Ui::signUpDialog *ui;
};

#endif // SIGNUPDIALOG_H
