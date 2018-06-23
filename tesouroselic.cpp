#include "tesouroselic.h".h"

TesouroSelic::TesouroSelic(double rAnual, double vInvestido, QDate* dtRetorno) : Investimento(rAnual, vInvestido, dtRetorno)
{}

double TesouroSelic::deduzirImposto(double valorFinalSemImposto, double valorRendido)
{
    return valorFinalSemImposto - (valorRendido * 0.15);
}
