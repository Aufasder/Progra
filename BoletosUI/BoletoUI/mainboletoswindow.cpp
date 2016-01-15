#include "mainboletoswindow.h"
#include "ui_mainboletoswindow.h"
#include <QMessageBox>

/*
QVector <int> DFe;
QVector <int> MFe;
QVector <int> AFe;
*/
QVector <QString> Nev;
QVector <int> Ven;

MainBoletosWindow::MainBoletosWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainBoletosWindow)
{
    ui->setupUi(this);
    ui->agregar->setText("Agregar");
    ui->edit->setEnabled(false);
    ui->cancelar->setEnabled(false);
    ui->aceptar->setEnabled(false);
}

MainBoletosWindow::~MainBoletosWindow()
{
    delete ui;
}


void MainBoletosWindow::on_aceptar_clicked()
{
    QString nomnom;
    nomnom = ui->edit->text();
    Nev.push_back(nomnom);
    Ven.push_back(0);
    ui->listWidget->addItem(nomnom);
    ui->listWidget_2->addItem(QString::number(0));
//  QMessageBox::information(this, "message",nomnom);
    ui->edit->clear();
    ui->cancelar->setEnabled(false);
    ui->aceptar->setEnabled(false);
    ui->edit->setEnabled(false);
}

void MainBoletosWindow::on_cancelar_clicked()
{
    ui->edit->clear();
    ui->cancelar->setEnabled(false);
    ui->aceptar->setEnabled(false);
    ui->edit->setEnabled(false);
}

void MainBoletosWindow::on_agregar_clicked()
{
    ui->aceptar->setEnabled(true);
    ui->cancelar->setEnabled(true);
    ui->edit->setEnabled(true);
}

void MainBoletosWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    int numnum = ui->listWidget->currentRow();
//    QMessageBox::information(this, "vendido", QString::number(numnum));
    Ven[numnum]++;
    ui->listWidget_2->item(numnum)->setText(QString::number(Ven[numnum]));
}

void MainBoletosWindow::on_resumen_clicked()
{
    int tam=Ven.size();
    int tot=0;
    for (int i=0 ; i < tam ; i++){
        tot = tot+ Ven [i];
    }
    QMessageBox::information(this, "resumen", "Boletos Vendidos = " +QString::number(tot));
}
