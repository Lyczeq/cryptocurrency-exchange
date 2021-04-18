#include "signupdialog.h"
#include "ui_signupdialog.h"

signUpDialog::signUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUpDialog)
{
    ui->setupUi(this);
}

signUpDialog::~signUpDialog()
{
    delete ui;
}

void signUpDialog::on_goBackButton_clicked()
{

}

void signUpDialog::on_signUpButton_clicked()
{

}
