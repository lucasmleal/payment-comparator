#include "mainwindow.h"
#include <QApplication>

#include "investimento.h"
#include "poupanca.h"
#include "tesouroselic.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Investimento* p = new Poupanca(0.04458, 5000, new QDate(2020, 07, 25));
    Investimento* ts = new TesouroSelic(0.065, 5000, new QDate(2020, 07, 25));

    double valorFinalPoupanca = p->calcular();
    double valorFinalTesouro = ts->calcular();

    std::cout << valorFinalPoupanca << std::endl;
    std::cout << valorFinalTesouro << std::endl;

    return 0;
}
