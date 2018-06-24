#include "mainwindow.h"
#include <QApplication>

#include "poupanca.h"
#include "tesouroselic.h"
#include "financiamento.h"
#include "simulacaofacade.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Investimento* p = new Poupanca(0.04458, 5000, new QDate(2020, 07, 25));

    Financiamento* f = new Financiamento(12, 450);
    Investimento* ts = new TesouroSelic(0.065, 5000, new QDate(2020, 07, 25));

    QString resposta = SimulacaoFacade::compararInvestimentoEFinanciamento(ts, f);

    std::cout << resposta.toStdString() << endl;

    return 0;
}
