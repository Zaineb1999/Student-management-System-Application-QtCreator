/********************************************************************************
** Form generated from reading UI file 'FilterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERDIALOG_H
#define UI_FILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *TypeBox;
    QLabel *label_4;
    QComboBox *TargetBox;
    QLabel *label;
    QLineEdit *KeyEdit;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *RegxBox;
    QCheckBox *CaseBox;
    QCheckBox *WildBoix;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *FilterDialog)
    {
        if (FilterDialog->objectName().isEmpty())
            FilterDialog->setObjectName(QString::fromUtf8("FilterDialog"));
        FilterDialog->resize(617, 300);
        buttonBox = new QDialogButtonBox(FilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(FilterDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 50, 579, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TypeBox = new QComboBox(gridLayoutWidget);
        TypeBox->addItem(QString());
        TypeBox->addItem(QString());
        TypeBox->addItem(QString());
        TypeBox->setObjectName(QString::fromUtf8("TypeBox"));

        gridLayout->addWidget(TypeBox, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        TargetBox = new QComboBox(gridLayoutWidget);
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->addItem(QString());
        TargetBox->setObjectName(QString::fromUtf8("TargetBox"));

        gridLayout->addWidget(TargetBox, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        KeyEdit = new QLineEdit(gridLayoutWidget);
        KeyEdit->setObjectName(QString::fromUtf8("KeyEdit"));

        gridLayout->addWidget(KeyEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RegxBox = new QCheckBox(gridLayoutWidget);
        RegxBox->setObjectName(QString::fromUtf8("RegxBox"));

        horizontalLayout->addWidget(RegxBox);

        CaseBox = new QCheckBox(gridLayoutWidget);
        CaseBox->setObjectName(QString::fromUtf8("CaseBox"));

        horizontalLayout->addWidget(CaseBox);

        WildBoix = new QCheckBox(gridLayoutWidget);
        WildBoix->setObjectName(QString::fromUtf8("WildBoix"));

        horizontalLayout->addWidget(WildBoix);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        label_6 = new QLabel(FilterDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 10, 311, 41));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\271\274\345\234\206\";"));

        retranslateUi(FilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterDialog)
    {
        FilterDialog->setWindowTitle(QCoreApplication::translate("FilterDialog", "Dialog", nullptr));
        TypeBox->setItemText(0, QCoreApplication::translate("FilterDialog", "Correspondance partielle", nullptr));
        TypeBox->setItemText(1, QCoreApplication::translate("FilterDialog", "Correspondance de pr\303\251fixe", nullptr));
        TypeBox->setItemText(2, QCoreApplication::translate("FilterDialog", "Correspondance de suffixe", nullptr));

        label_4->setText(QCoreApplication::translate("FilterDialog", "Cible de la recherche:", nullptr));
        TargetBox->setItemText(0, QCoreApplication::translate("FilterDialog", "Tous", nullptr));
        TargetBox->setItemText(1, QCoreApplication::translate("FilterDialog", "CNE", nullptr));
        TargetBox->setItemText(2, QCoreApplication::translate("FilterDialog", "Nom", nullptr));
        TargetBox->setItemText(3, QCoreApplication::translate("FilterDialog", "Sexe", nullptr));
        TargetBox->setItemText(4, QCoreApplication::translate("FilterDialog", "Date de naissance", nullptr));
        TargetBox->setItemText(5, QCoreApplication::translate("FilterDialog", "Ville", nullptr));
        TargetBox->setItemText(6, QCoreApplication::translate("FilterDialog", "Adresse", nullptr));

        label->setText(QCoreApplication::translate("FilterDialog", "Mots cl\303\251s:", nullptr));
        label_2->setText(QCoreApplication::translate("FilterDialog", "Mode de recherche:", nullptr));
        label_3->setText(QCoreApplication::translate("FilterDialog", "Trouver la pr\303\251cision:", nullptr));
        RegxBox->setText(QCoreApplication::translate("FilterDialog", "Expression r\303\251guli\303\250re", nullptr));
        CaseBox->setText(QCoreApplication::translate("FilterDialog", "Sensible \303\240 la casse", nullptr));
        WildBoix->setText(QCoreApplication::translate("FilterDialog", "Caract\303\250re g\303\251n\303\251rique", nullptr));
        label_5->setText(QCoreApplication::translate("FilterDialog", "(Indice: les expressions r\303\251guli\303\250res couvriront toutes les pr\303\251cisions)", nullptr));
        label_6->setText(QCoreApplication::translate("FilterDialog", "<html><head/><body><p>Bienvenue dans la fonction de recherche</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterDialog: public Ui_FilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERDIALOG_H
