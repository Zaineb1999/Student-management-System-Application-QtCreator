/********************************************************************************
** Form generated from reading UI file 'StuDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIALOG_H
#define UI_STUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *StuName;
    QLabel *StuID;
    QLabel *StuAdd;
    QLineEdit *AddEdit;
    QLabel *StuHome;
    QLineEdit *IDEdit;
    QLineEdit *NameEdit;
    QLineEdit *HomeEdit;
    QDateEdit *BirthEdit;
    QLabel *StuSex;
    QLabel *StuBirth;
    QComboBox *SexBox;

    void setupUi(QDialog *StuDialog)
    {
        if (StuDialog->objectName().isEmpty())
            StuDialog->setObjectName(QString::fromUtf8("StuDialog"));
        StuDialog->resize(382, 304);
        buttonBox = new QDialogButtonBox(StuDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(120, 230, 241, 81));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(StuDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 341, 211));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        StuName = new QLabel(verticalLayoutWidget);
        StuName->setObjectName(QString::fromUtf8("StuName"));

        gridLayout->addWidget(StuName, 1, 0, 1, 1);

        StuID = new QLabel(verticalLayoutWidget);
        StuID->setObjectName(QString::fromUtf8("StuID"));

        gridLayout->addWidget(StuID, 0, 0, 1, 1);

        StuAdd = new QLabel(verticalLayoutWidget);
        StuAdd->setObjectName(QString::fromUtf8("StuAdd"));

        gridLayout->addWidget(StuAdd, 5, 0, 1, 1);

        AddEdit = new QLineEdit(verticalLayoutWidget);
        AddEdit->setObjectName(QString::fromUtf8("AddEdit"));

        gridLayout->addWidget(AddEdit, 5, 1, 1, 1);

        StuHome = new QLabel(verticalLayoutWidget);
        StuHome->setObjectName(QString::fromUtf8("StuHome"));

        gridLayout->addWidget(StuHome, 4, 0, 1, 1);

        IDEdit = new QLineEdit(verticalLayoutWidget);
        IDEdit->setObjectName(QString::fromUtf8("IDEdit"));

        gridLayout->addWidget(IDEdit, 0, 1, 1, 1);

        NameEdit = new QLineEdit(verticalLayoutWidget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        gridLayout->addWidget(NameEdit, 1, 1, 1, 1);

        HomeEdit = new QLineEdit(verticalLayoutWidget);
        HomeEdit->setObjectName(QString::fromUtf8("HomeEdit"));

        gridLayout->addWidget(HomeEdit, 4, 1, 1, 1);

        BirthEdit = new QDateEdit(verticalLayoutWidget);
        BirthEdit->setObjectName(QString::fromUtf8("BirthEdit"));

        gridLayout->addWidget(BirthEdit, 3, 1, 1, 1);

        StuSex = new QLabel(verticalLayoutWidget);
        StuSex->setObjectName(QString::fromUtf8("StuSex"));

        gridLayout->addWidget(StuSex, 2, 0, 1, 1);

        StuBirth = new QLabel(verticalLayoutWidget);
        StuBirth->setObjectName(QString::fromUtf8("StuBirth"));

        gridLayout->addWidget(StuBirth, 3, 0, 1, 1);

        SexBox = new QComboBox(verticalLayoutWidget);
        SexBox->setObjectName(QString::fromUtf8("SexBox"));

        gridLayout->addWidget(SexBox, 2, 1, 1, 1);

        StuID->raise();
        StuName->raise();
        StuSex->raise();
        StuBirth->raise();
        StuAdd->raise();
        StuHome->raise();
        HomeEdit->raise();
        AddEdit->raise();
        NameEdit->raise();
        BirthEdit->raise();
        SexBox->raise();
        IDEdit->raise();
        verticalLayoutWidget->raise();
        buttonBox->raise();

        retranslateUi(StuDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StuDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StuDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StuDialog);
    } // setupUi

    void retranslateUi(QDialog *StuDialog)
    {
        StuDialog->setWindowTitle(QCoreApplication::translate("StuDialog", "Dialog", nullptr));
        StuName->setText(QCoreApplication::translate("StuDialog", "Nom:", nullptr));
        StuID->setText(QCoreApplication::translate("StuDialog", "CNE:", nullptr));
        StuAdd->setText(QCoreApplication::translate("StuDialog", "Adresse:", nullptr));
        StuHome->setText(QCoreApplication::translate("StuDialog", "Ville:", nullptr));
        StuSex->setText(QCoreApplication::translate("StuDialog", "Sexe:", nullptr));
        StuBirth->setText(QCoreApplication::translate("StuDialog", "Date de naissance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuDialog: public Ui_StuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIALOG_H
