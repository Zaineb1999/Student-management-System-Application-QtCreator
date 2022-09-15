#include "StuSubWindow.h"
#include "ui_StuSubWindow.h"

StuSubWindow::StuSubWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuSubWindow)
{
    ui->setupUi(this);

    this->tb = ui->tableWidget;
    this->filePath = "";
    this->flagModified = false;
    this->stuFilter = new FilterDialog();
    this->stuSorter = new SortDialog();
//    this->printer = new QPrinter();

    tb->setSelectionBehavior(QAbstractItemView::SelectRows);
    tb->setSelectionMode (QAbstractItemView::SingleSelection);
    tb->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(tb,SIGNAL(on_tableWidget_cellDoubleClicked(int,int)),this,SLOT(on_tableWidget_cellDoubleClicked(int,int)));

    QHeaderView *headerGoods = tb->horizontalHeader();
    headerGoods->setSortIndicator(0, Qt::AscendingOrder);
    headerGoods->setSortIndicatorShown(true);
    connect(headerGoods, SIGNAL(sectionClicked(int)), tb, SLOT (sortByColumn(int)));
}

StuSubWindow::~StuSubWindow()
{
    delete ui;
}

void StuSubWindow::addLine()
{
    StuDialog *dialog = new StuDialog();
    if(dialog->exec() == QDialog::Accepted)
    {
        this->flagModified = true;

        QVector<QString> res = dialog->getInput();

        QString ID = res[0];
        if(this->primaryKeyConfilct(ID,-1)){
            return;
        }

        int row_count = tb->rowCount();
        tb->insertRow(row_count);
        for(int i=0;i<=5;i++){
            QTableWidgetItem *newItem = new QTableWidgetItem();
            newItem->setText(res[i].replace(" ", ""));
            tb->setItem(row_count,i,newItem);
        }
    }
}

void StuSubWindow::alterLine()
{
    int rowCur = tb->currentRow();
    qDebug()<<"Le numéro de ligne modifié est: "<<rowCur<<endl;
    if(rowCur>=0){
        on_tableWidget_cellDoubleClicked(rowCur,0);
    }
}

void StuSubWindow::deleteLine()
{
    this->flagModified = true;
    int rowCur = tb->currentRow();
    qDebug()<<"Le numéro de ligne supprimé est:"<<rowCur<<endl;
    if(rowCur>=0){
        tb->removeRow(rowCur);
    }
}

void StuSubWindow::sortByID()
{
    this->flagModified = true;
    tb->sortItems(0);
}

void StuSubWindow::sortByName()
{
    this->flagModified = true;
    tb->sortItems(1);
}

void StuSubWindow::sortByUser()
{
    if(stuSorter->exec()==QDialog::Accepted){
        int col =stuSorter->getSortTarget();
        switch (stuSorter->getSortOrder()) {
            case 0:this->tb->sortItems(col,Qt::AscendingOrder);break;
            case 1:this->tb->sortItems(col,Qt::DescendingOrder); break;
        }
    }
}


/**
   - Qt::MatchFixedString：Effectuez une correspondance basée sur des chaînes.
   - Qt::MatchContains：Le terme de recherche est inclus dans le terme.
   - Qt::MatchStartsWith：Le terme de recherche correspond au début du terme.
   - Qt::MatchEndsWith：Le terme de recherche correspond à la fin du terme.
   - Qt::MatchRegExp (remplace tous les drapeaux ci-dessus) Utilisez des expressions régulières comme termes de recherche pour effectuer une correspondance basée sur des chaînes.
   - Qt::MatchCaseSensitive：Sensible à la casse
**/

bool StuSubWindow:: QString_Matches(
    const QString& str,
    const QString& pattern,
    const Qt::MatchFlags& flags)
{
    if(flags.testFlag(Qt::MatchRegExp) == true)
    {
        QRegularExpression::PatternOptions options = QRegularExpression::NoPatternOption;
        if(flags.testFlag(Qt::MatchCaseSensitive) == false)
        {
            options = QRegularExpression::CaseInsensitiveOption;
        }
        QRegularExpression regex(pattern, options);
        return regex.match(str).hasMatch();
    }
    else
    {
        Qt::CaseSensitivity cs = Qt::CaseSensitive;
        if(flags.testFlag(Qt::MatchCaseSensitive) == false)
        {
            cs = Qt::CaseInsensitive;
        }
        if(flags.testFlag(Qt::MatchContains) == true)
        {
            return str.contains(pattern, cs);
        }
        else
        {
            if(flags.testFlag(Qt::MatchStartsWith) == true)
            {
                if(str.startsWith(pattern, cs) == true)
                {
                    return true;
                }
            }
            if(flags.testFlag(Qt::MatchEndsWith) == true)
            {
                if(str.endsWith(pattern, cs) == true)
                {
                    return true;
                }
            }
            if(flags.testFlag(Qt::MatchFixedString) == true)
            {
                return (str.compare(pattern, cs) == 0);
            }
        }
    }
    return false;
};

void StuSubWindow::filter()
{
    if(stuFilter->exec() == QDialog::Accepted){

        QString text = stuFilter->getKey();

        Qt::MatchFlags flag;
        QString pattenType = stuFilter->getType();
        if(pattenType=="Correspondance partielle"){
            flag |= Qt::MatchContains;
        }else if(pattenType == "Correspondance de préfixe"){
            flag |= Qt::MatchStartsWith;
        }else if(pattenType == "Correspondance de suffixe"){
            flag |= Qt::MatchEndsWith;
        }


        if(stuFilter->isRegex()){
            flag |= Qt::MatchRegExp;
        }

        if(stuFilter->isWild()){
            flag |= Qt::MatchWildcard;
        }

        if(stuFilter->isCaseSensitive()){
            flag |= Qt::MatchCaseSensitive;
        }


        QList <QTableWidgetItem *> item;
        if(stuFilter->getTarget()=="Tous"){
            item = tb->findItems(text, flag);
        }else{
            int index = stuFilter->getTargetIndex()-1;
            qDebug()<<"Sélectionnés: "<<index<<endl;
            for(int i=0;i<tb->rowCount();i++){
                if(QString_Matches(tb->item(i,index)->text(),text,flag)){
                    item.push_back(tb->item(i,index));
                }
            }
        }


        for (int i = 0; i < tb->rowCount(); i++)
        {
            tb->setRowHidden(i, true);
        }

        if (!item.isEmpty())
        {
            for (int i = 0; i < item.count(); i++)
            {
                tb->setRowHidden(item.at(i)->row(),false);
            }
        }
    }


}

void StuSubWindow::printTable()
{
//    QPrintDialog dialog(this->printer, this);
//    if(dialog.exec() == QDialog::Rejected) return;
//    //printPreviewAction();
//    QPixmap pixmap(ui->tableWidget->size());
//    ui->tableWidget->render(&pixmap);
//    QPainter painter;
//    painter.begin(printer);
//    painter.drawPixmap(QRectF(0, 0, pixmap.width(), pixmap.height()), pixmap, QRectF(0, 0,pixmap.width(), pixmap.height()));
//    painter.end();

}

bool StuSubWindow::saveFile()
{
    if(filePath == ""){
        return this->saveFileAs();
    }else{
        return this->saveTableTo(filePath);
    }
}

bool StuSubWindow::saveFileAs()
{
    QFileDialog fileDialog;
    QString fileName = fileDialog.getSaveFileName(this,tr("Open File"),"/Nouveau_Formulaire",tr("Text File(*.txt)"));

    if(fileName == ""){
        return false;
    }
    else{
        QString simpleName = this->getFileNameWithoutFormat(fileName);
        this->setWindowTitle(simpleName);
        if(this->filePath == ""){
            this->filePath = fileName;
        }
        return this->saveTableTo(fileName);
    }
}

bool StuSubWindow::saveTableTo(QString filepath)
{
    QFile file(filepath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,tr("Avertissement"),tr("Impossible d'ouvrir le fichier"));
        return false;
    }
    else
    {
        QTextStream textStream(&file);
        textStream.setCodec("UTF-8");
        textStream << FILE_KEY << endl;
        for(int i=0; i <ui->tableWidget->rowCount(); i++)
        {
            for(int j=0; j<=5;j++){
                textStream << ui->tableWidget->item(i,j)->text()<<" ";
            }
            textStream<<endl;
        }
        QMessageBox::information(this,tr("Reussie"),tr("Enregistré avec succès"));
        this->flagModified = false;
        file.close();
        return true;
    }
}

void StuSubWindow::importFile(QString fileName)
{
    this->filePath = fileName;
    QFileInfo fi = QFileInfo(fileName);
    qDebug()<<fi.fileName()<<endl;
    this->windowTitleChanged(fi.fileName());
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
            textStream.setCodec("UTF-8");
            QString lineInfo;
            lineInfo = textStream.readLine();

            if(lineInfo != FILE_KEY){
                QMessageBox::warning(this,tr("Erreur"),tr("Ce fichier n'est pas compatible avec ce système"));
                this->close();
                return;
            }
            while(!textStream.atEnd())
            {
                lineInfo = textStream.readLine();
                QStringList newLine = lineInfo.split(QRegExp("[ ]"));
                int row_count = tb->rowCount();
                tb->insertRow(row_count);
                for(int i=0;i<=5;i++){
                    QTableWidgetItem *newItem = new QTableWidgetItem();
                    newItem->setText(newLine.at(i));
                    tb->setItem(row_count,i,newItem);
                }
            }
        }
        file.close();
    }
}

StuInfoTemplate StuSubWindow::getTableForRow(int row)
{
    return StuInfoTemplate(tb->item(row,0)->text(),
                           tb->item(row,1)->text(),
                           tb->item(row,2)->text(),
                           tb->item(row,3)->text(),
                           tb->item(row,4)->text(),
                           tb->item(row,5)->text());
}

QString StuSubWindow::getFileNameWithoutFormat(QString filename)
{
    QFileInfo fi(filename);
    QStringList simpleName = fi.fileName().split(QRegExp("[.]"));
    return simpleName.at(0);

}

bool StuSubWindow::primaryKeyConfilct(QString ID,int before)
{
    int curRow = tb->rowCount();
    for(int i=0;i<curRow;i++){
        if(tb->item(i,0)->text() == ID && i!=before){
            QMessageBox::warning(this,tr("Erreur"),tr("L'élève avec ce CNE existe déjà et ne peut pas être ajouté à nouveau!"));
            return true;
        }
    }
    return false;
}

void StuSubWindow::closeEvent(QCloseEvent *event)
{
    if(this->flagModified)
    {
        QMessageBox::StandardButton button;
        QString name = this->windowTitle();
        button=QMessageBox::question(this,tr("Quittez le programme"),QString(name+tr(" pas encore enregistré, s'il faut enregistrer")),QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        if(button==QMessageBox::No)
        {
            event->accept();
        }
        else if(button==QMessageBox::Yes)
        {
            if(this->saveFile()){
                event->accept();
            }else{
                event->ignore();
            }
        }
        else if(button==QMessageBox::Cancel)
        {
            event->ignore();
        }
    }
    else{
        event->accept();
    }

}

void StuSubWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    StuInfoTemplate info = getTableForRow(row);
    info.showStuInfo();
    StuDialog *dialog = new StuDialog();
    dialog->setByStuInfo(info);
    if(dialog->exec() == QDialog::Accepted)
    {
        this->flagModified = true;
        QVector<QString> res = dialog->getInput();

        QString ID = res[0];
        if(this->primaryKeyConfilct(ID,row)){
            return;
        }

        for(int i=0;i<=5;i++){
           tb->item(row,i)->setText(res[i]);
        }
    }
}

QString StuSubWindow::getFilePath() const
{
    return filePath;
}

