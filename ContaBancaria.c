#include <stdio.h>
#include "ContaBancaria.h"

void Inicializa(ContaBancaria *conta, int numero, double saldo) {
    conta->numero = numero;
    conta->saldo = saldo;
}

void Deposito(ContaBancaria *conta, double valor){
    conta->saldo += valor;
}

void Saque(ContaBancaria *conta, double valor){
    conta->saldo -= valor;
}

void Imprime(ContaBancaria conta){
    printf("Conta: %d | Saldo: R$ %.2f\n", conta.numero, conta.saldo);
}

int VerificaNum(ContaBancaria conta, int num){
    return (conta.numero==num) ? 1 : 0;
}

double ConsultaSaldo(ContaBancaria conta){
    return conta.saldo;  
}