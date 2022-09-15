#ifndef PROJETCPP_H
#define PROJETCPP_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QVector>
#include <QMap>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QCloseEvent>
#include <QLabel>
#include <QTimer>

#include "StuSubWindow.h"
#include "StuDialog.h"
#include "LoginDialog.h"
#include "StyleSelector.h"

namespace Ui {
class ProjetCpp;
}

class ProjetCpp : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProjetCpp(QWidget *parent = nullptr);
    ~ProjetCpp();
    int getActiveTalbeIndex();
    bool showLoginBox();
    void timeUpdate();

protected:
     void closeEvent(QCloseEvent *event);

private slots:

    void on_actionNew_triggered();
    void on_actionClose_triggered();
    void on_actionSave_triggered();
    void on_actionSaveAs_triggered();
    void on_actionOpen_triggered();
    void on_actionPrint_triggered();

    void on_actionAdd_triggered();
    void on_actionAlter_triggered();
    void on_actionDelete_triggered();
    void on_actionSortID_triggered();
    void on_actionSortName_triggered();
    void on_actionSort_triggered();
    void on_actionFilter_triggered();

    void on_actionToolbar_toggled(bool arg1);
    void on_actionStatus_toggled(bool arg1);


    void on_actionTabBar_triggered();
    void on_actionWindow_triggered();
    void on_actionTileSubWindows_triggered();
    void on_actionSascadeSubWindows_triggered();

    void on_actionAbout_triggered();

    void on_actionOriginQss_triggered();
    void on_actionQssBlue_triggered();

private:
    Ui::ProjetCpp *ui;
    QVector<StuSubWindow*> subWnds;
    QMap<QMdiSubWindow*,int> WindMap;
    QMap<QString,int> OpenMap;
    int tableIndex;
    QLabel* currentTimeLabel;

};

#endif // PROJETCPP_H
