/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *signInButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *login;
    QLineEdit *title;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(800, 500);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        loginDialog->setFont(font);
        groupBox = new QGroupBox(loginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(260, 240, 280, 215));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 110, 245, 61));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        emailLabel = new QLabel(widget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        emailLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(widget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emailLineEdit);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(widget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        signInButton = new QPushButton(groupBox);
        signInButton->setObjectName(QString::fromUtf8("signInButton"));
        signInButton->setGeometry(QRect(80, 180, 137, 28));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 10, 241, 101));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        login = new QLabel(widget1);
        login->setObjectName(QString::fromUtf8("login"));
        login->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(login);

        title = new QLineEdit(loginDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(170, 80, 417, 44));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(20);
        title->setFont(font2);
        title->setFrame(false);
        title->setAlignment(Qt::AlignCenter);
        title->setReadOnly(true);

        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QCoreApplication::translate("loginDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        emailLabel->setText(QCoreApplication::translate("loginDialog", "email:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("loginDialog", "password:", nullptr));
        passwordLineEdit->setText(QString());
        signInButton->setText(QCoreApplication::translate("loginDialog", "Sign in", nullptr));
        login->setText(QCoreApplication::translate("loginDialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Login</span></p></body></html>", nullptr));
        title->setText(QCoreApplication::translate("loginDialog", "Cryptocurrency Exchange", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
