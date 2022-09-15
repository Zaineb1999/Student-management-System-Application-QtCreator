#include "ProjetCpp.h"
#include "ui_ProjetCpp.h"

#include <QTableWidget>
#include <QMdiSubWindow>


ProjetCpp::ProjetCpp(QWidget *parent):QMainWindow(parent), ui(new Ui::ProjetCpp) {
    ui->setupUi(this);
    setWindowTitle(tr("Système de gestion des informations sur les étudiants"));

    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
    ui->mdiArea->setTabPosition(QTabWidget::North);
    ui->mdiArea->setTabShape(QTabWidget::Rounded);
    ui->mdiArea->setTabsClosable(true);
    ui->mdiArea->setTabsMovable(true);

    this->tableIndex = -1;

    currentTimeLabel = new QLabel;
    ui->statusBar->addWidget(currentTimeLabel);
    currentTimeLabel->show();
    ui->statusBar->show();
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()),this,SLOT(timeUpdate()));

    this->ui->actionToolbar->setChecked(true);
    this->ui->actionStatus->setChecked(true);
}

ProjetCpp::~ProjetCpp() {
    delete ui;
}

int ProjetCpp::getActiveTalbeIndex() {
    if(this->ui->mdiArea->activeSubWindow()==nullptr){
        return -1;
    }
    int i = this->WindMap.find(this->ui->mdiArea->activeSubWindow()).value();
    qDebug()<<"This index is"<<i<<endl;
    return i;
}

void ProjetCpp::closeEvent(QCloseEvent *event) {

    foreach(QMdiSubWindow *window, ui->mdiArea->subWindowList()){
        if(window->isActiveWindow()){
            int i = this->WindMap.find(window).value();
            subWnds[i]->closeEvent(event);
        }
    }
}

void ProjetCpp::on_actionNew_triggered() {
    StuSubWindow *newWnd = new StuSubWindow();    subWnds.push_back(newWnd);

    QMdiSubWindow *child = ui->mdiArea->addSubWindow(newWnd);
    tableIndex++;
    WindMap.insert(child,tableIndex);


    newWnd->resize(700,700);
    newWnd->setWindowTitle(tr("Formulaire d'informations des élèves de la classe numero %1").arg(tableIndex+1));
    child->resize(700,700);
    child->show();
}

void ProjetCpp::on_actionAdd_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->addLine();
}

void ProjetCpp::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("À propos du projet"),
            tr("<p>"
               "<b>Gestionnaire des Etudiants</b> est un programme de gestion de l'information des étudiants, est un mini projet du cours 'Orienté Objet en c++' du filiere GI1RBD - ENSEM.<br />"
               "Le programme est développé en utilisant le langage de programmation C++ et le framework Qt pour facilité la manipulation des informations des étudiants.<br/>"
               "Vous pouvez envoyer du courrier si vous avez des questions <a href=\"mailto:contact@ensem.ac.ma\">contact@ensem.ac.ma</a><br/>"
               "Notre site web <a href=\"ensem.ac.ma/\" target=\"_blank\"><b>ensem.ac.ma</b></a>"
               "<hr/>"
               "<p style=\"text-align: center; font-size: 10px;color:gray\"><u>Réalisé par:</u><br />ZAINEB MOUSLIH - ZINEB FAOUZ IDRISSI - ALAA BOUAGADA</p></p>"
               ));
}

bool ProjetCpp::showLoginBox() {
    LoginDialog *login = new LoginDialog();
    while(true){
        if(login->exec() == QDialog::Accepted){
            if(login->getUSER()!=USERNAME || login->getPWD()!=PASSWORD){
                QMessageBox::warning(this,tr("Attention"),
                         tr("Le nom d'utilisateur ou le mot de passe correct"));
                continue;
            }else{
                QMessageBox::information(this,tr("Connexion réussie"),
                         tr("Connexion réussie, vous êtes les bienvenus"));
                return true;
            }
        }else if(login->exec() == QDialog::Rejected){
            return false;
        }else{
            return false;
        }
    }

}

void ProjetCpp::timeUpdate() {
    QDateTime current_time = QDateTime::currentDateTime();
    QString timestr = current_time.toString( "yyyy/MM/dd hh:mm:ss");
    currentTimeLabel->setText(timestr);
}

void ProjetCpp::on_actionAlter_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->alterLine();
}

void ProjetCpp::on_actionDelete_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->deleteLine();
}

void ProjetCpp::on_actionSortID_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->sortByID();
}

void ProjetCpp::on_actionSortName_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->sortByName();
}

void ProjetCpp::on_actionClose_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->close();
}

void ProjetCpp::on_actionSave_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->saveFile();
}


void ProjetCpp::on_actionSaveAs_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->saveFileAs();
}


void ProjetCpp::on_actionOpen_triggered() {

    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,tr("Ouvrir un fichier"),QDir::currentPath(),tr("Text File (*.txt)"));

    foreach(QMdiSubWindow *window, ui->mdiArea->subWindowList()){
        if(window->isActiveWindow()){
            int i = this->WindMap.find(window).value();
            if(subWnds[i]->getFilePath() == fileName){

                ui->mdiArea->setActiveSubWindow(window);
                return;
            }
        }
    }


    if(fileName == ""){
        return;
    }
    else{
       QFile file(fileName);
       if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
       {
           QMessageBox::warning(this,tr("Erreur"),tr("Impossible d'ouvrir le fichier"));
           return;
       }
       else
       {
           if(!file.isReadable())
           {
               QMessageBox::warning(this,tr("Erreur"),tr("Le fichier est illisible"));
           }
           else
           {



               QTextStream textStream(&file);
               QString lineInfo;
               lineInfo = textStream.readLine();
               if(lineInfo != FILE_KEY){
                   QMessageBox::warning(this,tr("Erreur"),tr("Ce fichier n'est pas compatible avec ce système"));
                   file.close();
                   return;
               }

               this->on_actionNew_triggered();
               int activeIndex = this->getActiveTalbeIndex();
               if(activeIndex == -1){

                   QMessageBox::warning(this,tr("Attention"),
                            tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
                   return;
               }

               QFileInfo fi = QFileInfo(fileName);
               QStringList sections = fi.fileName().split(QRegExp("[.]"));
               this->ui->mdiArea->activeSubWindow()->setWindowTitle(sections.at(0));
               subWnds[activeIndex]->setWindowTitle(fi.fileName());
               subWnds[activeIndex]->importFile(fileName);

           }
           file.close();
       }
    }
}



void ProjetCpp::on_actionTabBar_triggered() {
    ui->mdiArea->setViewMode(QMdiArea::TabbedView);
}

void ProjetCpp::on_actionWindow_triggered() {
    ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
}

void ProjetCpp::on_actionSascadeSubWindows_triggered() {
    ui->mdiArea-> cascadeSubWindows();
}

void ProjetCpp::on_actionTileSubWindows_triggered() {
    ui->mdiArea->tileSubWindows();
}

void ProjetCpp::on_actionSort_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->sortByUser();
}

void ProjetCpp::on_actionFilter_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->filter();
}

void ProjetCpp::on_actionToolbar_toggled(bool arg1) {
    if(arg1){
        this->ui->toolBar->show();
        this->ui->mainToolBar->show();
    }else{
        this->ui->toolBar->hide();
        this->ui->mainToolBar->hide();
    }
}

void ProjetCpp::on_actionStatus_toggled(bool arg1) {
    if(arg1){
        this->ui->statusBar->show();
    }else{
        this->ui->statusBar->hide();
    }
}

void ProjetCpp::on_actionPrint_triggered() {
    int activeIndex = this->getActiveTalbeIndex();
    if(activeIndex == -1){
        QMessageBox::warning(this,tr("Attention"),
                 tr("Vous n'êtes pas en train de créer (ou d'ouvrir) un fichier, veuillez d'abord créer un fichier."));
        return;
    }
    subWnds[activeIndex]->printTable();
}

void ProjetCpp::on_actionOriginQss_triggered() {
    StyleSelector::setStyle(":/qss/stylesheet/none.qss");
}

void ProjetCpp::on_actionQssBlue_triggered() {
    StyleSelector::setStyle(":/qss/stylesheet/ProjetCpp.qss");
}
