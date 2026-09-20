#ifndef BANCO_H
#define BANCO_H

#include "ContaBancaria.h"

typedef struct{
    int qtd_contas;
    ContaBancaria contas[100];
} Contas;

void InicializaContas(Contas *cnt);
void CriarNovasContas(Contas *cnt, int n);
void ImprimirContas(Contas *cnt);
void ZerarSaldoConta(Contas *cnt, int num);

#endif
