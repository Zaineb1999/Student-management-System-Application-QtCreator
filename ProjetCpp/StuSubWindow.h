#ifndef STUSUBWINDOW_H
#define STUSUBWINDOW_H

#include <QWidget>
#include <QMessageBox>
#include <QMdiSubWindow>
#include <QTableWidget>
#include <QDebug>
#include <QFileDialog>
#include <QCloseEvent>
#include <QTextCodec>
//#include <QtPrintSupport/QPrinter>
//#include <QtPrintSupport/QPrintDialog>
//#include <QPainter>

#include "StuDialog.h"
#include "config.h"
#include "FilterDialog.h"
#include "SortDialog.h"

namespace Ui {
class StuSubWindow;
}

class StuSubWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StuSubWindow(QWidget *parent = nullptr);
    ~StuSubWindow();
    void addLine();
    void alterLine();
    void deleteLine();
    void sortByID();
    void sortByName();
    void closeFile();
    bool saveFile();
    bool saveFileAs();
    bool saveTableTo(QString filepath);
    void importFile(QString fileName);
    void closeEvent(QCloseEvent *event);
    void sortByUser();
    void filter();
    void printTable();

    StuInfoTemplate getTableForRow(int row);
    QString getFileNameWithoutFormat(QString filename);
    bool primaryKeyConfilct(QString ID,int before);
    QString getFilePath() const;
    bool QString_Matches(const QString& str,const QString& pattern,const Qt::MatchFlags& flags);

private slots:
    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::StuSubWindow *ui;
    QTableWidget* tb;
    FilterDialog *stuFilter;
    SortDialog *stuSorter;
    QString filePath;
    bool flagModified;
    //QPrinter *printer;
};

#endif // STUSUBWINDOW_H
