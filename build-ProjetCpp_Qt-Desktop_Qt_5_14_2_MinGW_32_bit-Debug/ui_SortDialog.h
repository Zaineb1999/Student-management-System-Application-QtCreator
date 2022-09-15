/********************************************************************************
** Form generated from reading UI file 'SortDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QComboBox *sortTarget;
    QComboBox *sortOrder;

    void setupUi(QDialog *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QString::fromUtf8("SortDialog"));
        SortDialog->resize(398, 166);
        buttonBox = new QDialogButtonBox(SortDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalLayoutWidget = new QWidget(SortDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 40, 341, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_5->addWidget(label_21);

        sortTarget = new QComboBox(horizontalLayoutWidget);
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->addItem(QString());
        sortTarget->setObjectName(QString::fromUtf8("sortTarget"));

        horizontalLayout_5->addWidget(sortTarget);

        sortOrder = new QComboBox(horizontalLayoutWidget);
        sortOrder->addItem(QString());
        sortOrder->addItem(QString());
        sortOrder->setObjectName(QString::fromUtf8("sortOrder"));

        horizontalLayout_5->addWidget(sortOrder);


        retranslateUi(SortDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SortDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SortDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QDialog *SortDialog)
    {
        SortDialog->setWindowTitle(QCoreApplication::translate("SortDialog", "Dialog", nullptr));
        label_21->setText(QCoreApplication::translate("SortDialog", "Objets tri\303\251s", nullptr));
        sortTarget->setItemText(0, QCoreApplication::translate("SortDialog", "CNE", nullptr));
        sortTarget->setItemText(1, QCoreApplication::translate("SortDialog", "Nom", nullptr));
        sortTarget->setItemText(2, QCoreApplication::translate("SortDialog", "Le sexe", nullptr));
        sortTarget->setItemText(3, QCoreApplication::translate("SortDialog", "Date de naissance", nullptr));
        sortTarget->setItemText(4, QCoreApplication::translate("SortDialog", "Ville natale", nullptr));
        sortTarget->setItemText(5, QCoreApplication::translate("SortDialog", "Adresse", nullptr));

        sortOrder->setItemText(0, QCoreApplication::translate("SortDialog", "Croissant", nullptr));
        sortOrder->setItemText(1, QCoreApplication::translate("SortDialog", "D\303\251croissant", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
