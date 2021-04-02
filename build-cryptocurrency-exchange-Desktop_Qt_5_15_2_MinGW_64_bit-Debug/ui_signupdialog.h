/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signUpDialog
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *login;
    QGridLayout *gridLayout;
    QLineEdit *firstNameLineEdit;
    QLabel *emailLabel;
    QLineEdit *lastNameLineEdit;
    QLabel *firstNameLabel;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *lastNameLabel;
    QLineEdit *emailLineEdit;
    QLineEdit *title;

    void setupUi(QDialog *signUpDialog)
    {
        if (signUpDialog->objectName().isEmpty())
            signUpDialog->setObjectName(QString::fromUtf8("signUpDialog"));
        signUpDialog->resize(800, 500);
        groupBox = new QGroupBox(signUpDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 240, 281, 231));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 250, 208));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        login = new QLabel(widget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(login);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        firstNameLineEdit = new QLineEdit(widget);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(firstNameLineEdit, 0, 1, 1, 1);

        emailLabel = new QLabel(widget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        emailLabel->setFont(font);

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);

        lastNameLineEdit = new QLineEdit(widget);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));
        lastNameLineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(lastNameLineEdit, 1, 1, 1, 1);

        firstNameLabel = new QLabel(widget);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        firstNameLabel->setFont(font);

        gridLayout->addWidget(firstNameLabel, 0, 0, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 3, 0, 1, 1);

        passwordLineEdit = new QLineEdit(widget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 3, 1, 1, 1);

        lastNameLabel = new QLabel(widget);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setFont(font);

        gridLayout->addWidget(lastNameLabel, 1, 0, 1, 1);

        emailLineEdit = new QLineEdit(widget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        gridLayout->addWidget(emailLineEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        title = new QLineEdit(signUpDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(180, 90, 417, 44));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(20);
        title->setFont(font1);
        title->setFrame(false);
        title->setAlignment(Qt::AlignCenter);
        title->setReadOnly(true);

        retranslateUi(signUpDialog);

        QMetaObject::connectSlotsByName(signUpDialog);
    } // setupUi

    void retranslateUi(QDialog *signUpDialog)
    {
        signUpDialog->setWindowTitle(QCoreApplication::translate("signUpDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        login->setText(QCoreApplication::translate("signUpDialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Sign up</span></p><p><br/></p></body></html>", nullptr));
        firstNameLineEdit->setText(QString());
        emailLabel->setText(QCoreApplication::translate("signUpDialog", "email:", nullptr));
        lastNameLineEdit->setText(QString());
        firstNameLabel->setText(QCoreApplication::translate("signUpDialog", "First Name", nullptr));
        passwordLabel->setText(QCoreApplication::translate("signUpDialog", "password:", nullptr));
        passwordLineEdit->setText(QString());
        lastNameLabel->setText(QCoreApplication::translate("signUpDialog", "Last Name", nullptr));
        title->setText(QCoreApplication::translate("signUpDialog", "Cryptocurrency Exchange", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpDialog: public Ui_signUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
