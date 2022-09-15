/********************************************************************************
** Form generated from reading UI file 'ProjetCpp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJETCPP_H
#define UI_PROJETCPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjetCpp
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionAdd;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionAlter;
    QAction *actionDelete;
    QAction *actionSortID;
    QAction *actionSortName;
    QAction *actionPrint;
    QAction *actionSaveAs;
    QAction *actionTabBar;
    QAction *actionWindow;
    QAction *actionSascadeSubWindows;
    QAction *actionTileSubWindows;
    QAction *actionSort;
    QAction *actionFilter;
    QAction *actionToolbar;
    QAction *actionStatus;
    QAction *actionOriginQss;
    QAction *actionQssBlue;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_6;
    QMenu *menu_3;
    QMenu *menu_7;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ProjetCpp)
    {
        if (ProjetCpp->objectName().isEmpty())
            ProjetCpp->setObjectName(QString::fromUtf8("ProjetCpp"));
        ProjetCpp->resize(1062, 591);
        actionNew = new QAction(ProjetCpp);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(ProjetCpp);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(ProjetCpp);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionAdd = new QAction(ProjetCpp);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon3);
        actionAbout = new QAction(ProjetCpp);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionSave = new QAction(ProjetCpp);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionAlter = new QAction(ProjetCpp);
        actionAlter->setObjectName(QString::fromUtf8("actionAlter"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icon/alert.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlter->setIcon(icon6);
        actionDelete = new QAction(ProjetCpp);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon7);
        actionSortID = new QAction(ProjetCpp);
        actionSortID->setObjectName(QString::fromUtf8("actionSortID"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icon/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortID->setIcon(icon8);
        actionSortName = new QAction(ProjetCpp);
        actionSortName->setObjectName(QString::fromUtf8("actionSortName"));
        actionSortName->setIcon(icon8);
        actionPrint = new QAction(ProjetCpp);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/icon/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon9);
        actionSaveAs = new QAction(ProjetCpp);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/icon/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon10);
        actionTabBar = new QAction(ProjetCpp);
        actionTabBar->setObjectName(QString::fromUtf8("actionTabBar"));
        actionWindow = new QAction(ProjetCpp);
        actionWindow->setObjectName(QString::fromUtf8("actionWindow"));
        actionSascadeSubWindows = new QAction(ProjetCpp);
        actionSascadeSubWindows->setObjectName(QString::fromUtf8("actionSascadeSubWindows"));
        actionTileSubWindows = new QAction(ProjetCpp);
        actionTileSubWindows->setObjectName(QString::fromUtf8("actionTileSubWindows"));
        actionSort = new QAction(ProjetCpp);
        actionSort->setObjectName(QString::fromUtf8("actionSort"));
        actionSort->setIcon(icon8);
        actionFilter = new QAction(ProjetCpp);
        actionFilter->setObjectName(QString::fromUtf8("actionFilter"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/icon/search .png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilter->setIcon(icon11);
        actionToolbar = new QAction(ProjetCpp);
        actionToolbar->setObjectName(QString::fromUtf8("actionToolbar"));
        actionToolbar->setCheckable(true);
        actionStatus = new QAction(ProjetCpp);
        actionStatus->setObjectName(QString::fromUtf8("actionStatus"));
        actionStatus->setCheckable(true);
        actionOriginQss = new QAction(ProjetCpp);
        actionOriginQss->setObjectName(QString::fromUtf8("actionOriginQss"));
        actionQssBlue = new QAction(ProjetCpp);
        actionQssBlue->setObjectName(QString::fromUtf8("actionQssBlue"));
        centralWidget = new QWidget(ProjetCpp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        ProjetCpp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProjetCpp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1062, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_6 = new QMenu(menu_2);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_7 = new QMenu(menu_3);
        menu_7->setObjectName(QString::fromUtf8("menu_7"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        ProjetCpp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProjetCpp);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(25, 25));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        ProjetCpp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProjetCpp);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ProjetCpp->setStatusBar(statusBar);
        toolBar = new QToolBar(ProjetCpp);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(25, 25));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ProjetCpp->addToolBar(Qt::LeftToolBarArea, toolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionClose);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addAction(actionPrint);
        menu_2->addAction(actionAdd);
        menu_2->addAction(actionAlter);
        menu_2->addAction(actionDelete);
        menu_2->addAction(menu_6->menuAction());
        menu_6->addAction(actionSortID);
        menu_6->addAction(actionSortName);
        menu_3->addAction(actionToolbar);
        menu_3->addAction(actionStatus);
        menu_3->addAction(menu_7->menuAction());
        menu_7->addAction(actionOriginQss);
        menu_7->addAction(actionQssBlue);
        menu_5->addAction(actionAbout);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addAction(actionAbout);
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionAlter);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionSort);
        toolBar->addAction(actionFilter);

        retranslateUi(ProjetCpp);

        QMetaObject::connectSlotsByName(ProjetCpp);
    } // setupUi

    void retranslateUi(QMainWindow *ProjetCpp)
    {
        ProjetCpp->setWindowTitle(QCoreApplication::translate("ProjetCpp", "ProjetCpp", nullptr));
        actionNew->setText(QCoreApplication::translate("ProjetCpp", "Nouveau(&N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("ProjetCpp", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("ProjetCpp", "Ouvrir(&O)", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("ProjetCpp", "Ouvrir", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("ProjetCpp", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("ProjetCpp", "Fermer(&C)", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("ProjetCpp", "Fermer", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd->setText(QCoreApplication::translate("ProjetCpp", "Ajouter", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd->setToolTip(QCoreApplication::translate("ProjetCpp", "Ajouter", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd->setShortcut(QCoreApplication::translate("ProjetCpp", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("ProjetCpp", "\303\200 propos", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("ProjetCpp", "\303\200 propos", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("ProjetCpp", "Enregistrer(&S)", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("ProjetCpp", "Enregistrer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("ProjetCpp", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAlter->setText(QCoreApplication::translate("ProjetCpp", "Modifier", nullptr));
#if QT_CONFIG(tooltip)
        actionAlter->setToolTip(QCoreApplication::translate("ProjetCpp", "Modifier", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("ProjetCpp", "Supprimer", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("ProjetCpp", "Supprimer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("ProjetCpp", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortID->setText(QCoreApplication::translate("ProjetCpp", "Trier par CNE", nullptr));
#if QT_CONFIG(tooltip)
        actionSortID->setToolTip(QCoreApplication::translate("ProjetCpp", "Trier par CNE", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSortName->setText(QCoreApplication::translate("ProjetCpp", "Trier par nom", nullptr));
#if QT_CONFIG(tooltip)
        actionSortName->setToolTip(QCoreApplication::translate("ProjetCpp", "Trier par nom", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrint->setText(QCoreApplication::translate("ProjetCpp", "Imprimer(&P)", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("ProjetCpp", "Imprimer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("ProjetCpp", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("ProjetCpp", "Enregistrer sous(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("ProjetCpp", "Enregistrer sous", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTabBar->setText(QCoreApplication::translate("ProjetCpp", "Mode d'\303\251tiquette de fen\303\252tre", nullptr));
#if QT_CONFIG(tooltip)
        actionTabBar->setToolTip(QCoreApplication::translate("ProjetCpp", "Mode d'\303\251tiquette de fen\303\252tre", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWindow->setText(QCoreApplication::translate("ProjetCpp", "Mode fen\303\252tre", nullptr));
#if QT_CONFIG(tooltip)
        actionWindow->setToolTip(QCoreApplication::translate("ProjetCpp", "Mode fen\303\252tre", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSascadeSubWindows->setText(QCoreApplication::translate("ProjetCpp", "Arrangement de chevauchement", nullptr));
#if QT_CONFIG(tooltip)
        actionSascadeSubWindows->setToolTip(QCoreApplication::translate("ProjetCpp", "Arrangement de chevauchement", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTileSubWindows->setText(QCoreApplication::translate("ProjetCpp", "Bien agenc\303\251", nullptr));
#if QT_CONFIG(tooltip)
        actionTileSubWindows->setToolTip(QCoreApplication::translate("ProjetCpp", "Bien agenc\303\251", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSort->setText(QCoreApplication::translate("ProjetCpp", "Trier", nullptr));
#if QT_CONFIG(tooltip)
        actionSort->setToolTip(QCoreApplication::translate("ProjetCpp", "Trier", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFilter->setText(QCoreApplication::translate("ProjetCpp", "Filtrer", nullptr));
        actionFilter->setIconText(QCoreApplication::translate("ProjetCpp", "Filtrer", nullptr));
#if QT_CONFIG(tooltip)
        actionFilter->setToolTip(QCoreApplication::translate("ProjetCpp", "Filtrer", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToolbar->setText(QCoreApplication::translate("ProjetCpp", "Afficher la barre d'outils", nullptr));
#if QT_CONFIG(tooltip)
        actionToolbar->setToolTip(QCoreApplication::translate("ProjetCpp", "Afficher la barre d'outils", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatus->setText(QCoreApplication::translate("ProjetCpp", "Afficher la barre d'\303\251tat", nullptr));
#if QT_CONFIG(tooltip)
        actionStatus->setToolTip(QCoreApplication::translate("ProjetCpp", "Afficher la barre d'\303\251tat", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOriginQss->setText(QCoreApplication::translate("ProjetCpp", "Th\303\250me Original", nullptr));
#if QT_CONFIG(tooltip)
        actionOriginQss->setToolTip(QCoreApplication::translate("ProjetCpp", "Th\303\250me Original", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQssBlue->setText(QCoreApplication::translate("ProjetCpp", "Th\303\250me bleu", nullptr));
#if QT_CONFIG(tooltip)
        actionQssBlue->setToolTip(QCoreApplication::translate("ProjetCpp", "Th\303\250me bleu", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("ProjetCpp", "Fichier(&F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("ProjetCpp", "Editer(&E)", nullptr));
        menu_6->setTitle(QCoreApplication::translate("ProjetCpp", "Trier", nullptr));
        menu_3->setTitle(QCoreApplication::translate("ProjetCpp", "Affichage(&V)", nullptr));
        menu_7->setTitle(QCoreApplication::translate("ProjetCpp", "Th\303\250me", nullptr));
        menu_5->setTitle(QCoreApplication::translate("ProjetCpp", "Aide(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("ProjetCpp", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjetCpp: public Ui_ProjetCpp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJETCPP_H
