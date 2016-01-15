#include "boletos2.h"
#include "ui_boletos2.h"
#include <QMessageBox>

QVector <QString> Nev;
QVector <int> Ven;
QVector <int> Pre;
QVector <int> Cup;

boletos2::boletos2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::boletos2)
{
    ui->setupUi(this);
    ui->lineEdit->setEnabled(false);
    ui->aceptar->setEnabled(false);
    ui->cancelar->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
}

boletos2::~boletos2()
{
    delete ui;
}

void boletos2::on_agregar_clicked()
{

    ui->lineEdit->setEnabled(true);
    ui->aceptar->setEnabled(true);
    ui->cancelar->setEnabled(true);
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_3->setEnabled(true);
}

void boletos2::on_aceptar_clicked()
{
    QString nomp, nump1, cup1;
    int nump, cupp;
    nomp = ui->lineEdit->text();
    nump1 = ui->lineEdit_2->text();
    cup1=ui->lineEdit_3->text();
    nump = nump1.toInt();
    cupp = cup1.toInt();
    Nev.push_back(nomp);
    Ven.push_back(0);
    Pre.push_back(nump);
    Cup.push_back(cupp);
    ui->listWidget->addItem(nomp);
    ui->listWidget_2->addItem(QString::number(0));
    ui->listWidget_3->addItem(QString::number(nump));
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit->setEnabled(false);
    ui->aceptar->setEnabled(false);
    ui->cancelar->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    QMessageBox::information(this, "Cupo", "Maximo de boletos = " +QString::number(cupp));
}

void boletos2::on_cancelar_clicked()
{
    ui->lineEdit_2->clear();
    ui->lineEdit->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit->setEnabled(false);
    ui->aceptar->setEnabled(false);
    ui->cancelar->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
}

void boletos2::on_listWidget_doubleClicked(const QModelIndex &index)
{
    int sold, ass;
    QString nombre;
    int res = ui->listWidget->currentRow();
    sold = Ven[res];
    //price = Pre[res];
    ass = Cup[res];
    nombre = Nev[res];
    QMessageBox::information(this, "Info del Evento","Al Evento " +nombre +" asistiran " +QString::number(sold) +" personas de " +QString::number(ass));

}

void boletos2::on_resumen_clicked()
{
    int tam, tot, ptot, btot;
    tam = Ven.size();
    tot = 0;
    ptot = 0;
    btot = 0;
    for ( int i = 0; i < tam; i++){
        ptot = Ven[i] * Pre[i];
        tot = tot + ptot;
        btot = btot + Ven[i];
    }
    QMessageBox::information(this , "Resumen" , "Boletos Vendidos = " +QString::number(btot) +" Ganancias Brutas = " +QString::number(tot));
}

void boletos2::on_listWidget_clicked(const QModelIndex &index)
{
    int number = ui->listWidget->currentRow();
    if (Ven[number] < Cup[number]){
        Ven[number]++;
        ui->listWidget_2->item(number)->setText(QString::number(Ven[number]));
    }
       else
    {
        QMessageBox::information(this, "Alerta", "Cupo Maximo Alcanzado Para Ese Evento");
    }

}

void boletos2::on_help_clicked()
{
    QMessageBox msg;
    msg.setText("Ayuda");
    msg.setInformativeText("Para Agregar un Evento use el boton agregar llene los rubros y precione aceptar \n En caso de presionar agregar por error precione cancelar \n Para comprar un boleto haga un solo click sobre el evento \n Si desea obtener un resumen del evento doble click sobre el evento \n Si a su vez desea un compilado del los eventos presione Resumen");
    msg.exec();
}
