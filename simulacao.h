#ifndef SIMULACAO_H
#define SIMULACAO_H

#include <QObject>
#include "financiamento.h"
#include "investimento.h"

using namespace std;

class Simulacao : public QObject
{
    Q_OBJECT

private:
    double valorAVista;
    Financiamento* financiamento;
    Investimento* investimento;
};

#endif // SIMULACAO_H
