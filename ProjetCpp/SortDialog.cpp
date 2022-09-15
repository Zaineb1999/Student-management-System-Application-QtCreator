#include "SortDialog.h"
#include "ui_SortDialog.h"

SortDialog::SortDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SortDialog)
{
    ui->setupUi(this);

    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, [=](){ qDebug("ok");});
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, [=](){ qDebug("annuler"); });
}

SortDialog::~SortDialog()
{
    delete ui;
}

int SortDialog::getSortTarget()
{
    return this->ui->sortTarget->currentIndex();
}

int SortDialog::getSortOrder()
{
    return this->ui->sortOrder->currentIndex();
}
