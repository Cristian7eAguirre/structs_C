#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

typedef struct{
    int numero;
    double saldo;
} ContaBancaria;

void Inicializa(ContaBancaria *conta, int numero, double saldo);
void Deposito(ContaBancaria *conta, double valor);
void Saque(ContaBancaria *conta, double valor);
void Imprime(ContaBancaria conta);

int VerificaNum(ContaBancaria conta, int num);
double ConsultaSaldo(ContaBancaria conta);

#endif