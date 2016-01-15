#ifndef MAINBOLETOSWINDOW_H
#define MAINBOLETOSWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainBoletosWindow;
}

class MainBoletosWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainBoletosWindow(QWidget *parent = 0);
    ~MainBoletosWindow();

private slots:
    void on_aceptar_clicked();

    void on_cancelar_clicked();

    void on_agregar_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_resumen_clicked();

private:
    Ui::MainBoletosWindow *ui;
};

#endif // MAINBOLETOSWINDOW_H
