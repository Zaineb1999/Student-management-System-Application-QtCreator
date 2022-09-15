/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Welcome;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *UserEdit;
    QLabel *UserName;
    QLineEdit *PwdEdit;
    QLabel *Password;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(487, 300);
        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 431, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Welcome = new QLabel(LoginDialog);
        Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->setGeometry(QRect(150, 20, 281, 91));
        Welcome->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        gridLayoutWidget_2 = new QWidget(LoginDialog);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 120, 431, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        UserEdit = new QLineEdit(gridLayoutWidget_2);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));
        UserEdit->setStyleSheet(QString::fromUtf8("padding-left: 10px;"));

        gridLayout_2->addWidget(UserEdit, 0, 1, 1, 1);

        UserName = new QLabel(gridLayoutWidget_2);
        UserName->setObjectName(QString::fromUtf8("UserName"));

        gridLayout_2->addWidget(UserName, 0, 0, 1, 1);

        PwdEdit = new QLineEdit(gridLayoutWidget_2);
        PwdEdit->setObjectName(QString::fromUtf8("PwdEdit"));
        PwdEdit->setStyleSheet(QString::fromUtf8("padding-left: 10px;"));

        gridLayout_2->addWidget(PwdEdit, 1, 1, 1, 1);

        Password = new QLabel(gridLayoutWidget_2);
        Password->setObjectName(QString::fromUtf8("Password"));

        gridLayout_2->addWidget(Password, 1, 0, 1, 1);

        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 111, 91));

        retranslateUi(LoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        Welcome->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Syst\303\250me de gestion des infos des \303\251tudiants</span></p><p align=\"center\"><span style=\" font-size:12pt;\">Bienvenue</span></p></body></html>", nullptr));
        UserName->setText(QCoreApplication::translate("LoginDialog", "Identifiant:", nullptr));
        Password->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p>Mot de passe: </p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p><img src=\":/icon/icon/Logo_ENSEM.gif\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
