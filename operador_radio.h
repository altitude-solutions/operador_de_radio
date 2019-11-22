#ifndef OPERADOR_RADIO_H
#define OPERADOR_RADIO_H

#include <QMainWindow>
#include "registro_horarios.h"
#include "registro_penalidades.h"
#include "registro_datos.h"

namespace Ui {
class Operador_radio;
}

class Operador_radio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Operador_radio(QWidget *parent = nullptr);
    ~Operador_radio();

signals:
    void enviar_nombre(QString);

private slots:
    void recibir_nombre(QString);

private:
    Ui::Operador_radio *ui;
    Registro_horarios *registro_horarios;
    Registro_penalidades *registro_penalidades;
    Registro_datos *registro_datos;
};

#endif // OPERADOR_RADIO_H