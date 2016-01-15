#ifndef BOLETOS2_H
#define BOLETOS2_H

#include <QMainWindow>

namespace Ui {
class boletos2;
}

class boletos2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit boletos2(QWidget *parent = 0);
    ~boletos2();

private slots:
    void on_agregar_clicked();

    void on_aceptar_clicked();

    void on_cancelar_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_resumen_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_help_clicked();

private:
    Ui::boletos2 *ui;
};

#endif // BOLETOS2_H
