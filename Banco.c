#include <stdio.h>
#include "Banco.h"

void InicializaContas(Contas *cnt) {
    cnt->qtd_contas = 0;
}

void CriarNovasContas(Contas *cnt, int n) {
    int i;
    for (i = 0; i < n; i++) {
        double saldo_inicial;
        int num_conta = cnt->qtd_contas + 1001;

        printf("Informe o saldo inicial para a conta %d: ", num_conta);
        scanf("%lf", &saldo_inicial);

        Inicializa(&cnt->contas[cnt->qtd_contas], num_conta, saldo_inicial);
        cnt->qtd_contas++;
    }
}

void ImprimirContas(Contas *cnt) {
    int i;
    printf("\n--- LISTA DE CONTAS NO BANCO ---\n");
    for (i = 0; i < cnt->qtd_contas; i++) {
        Imprime(cnt->contas[i]);
    }
}

void ZerarSaldoConta(Contas *cnt, int num) {
    int i;
    for (i = 0; i < cnt->qtd_contas; i++) {
        if (VerificaNum(cnt->contas[i], num)) {
            double saldo_atual = ConsultaSaldo(cnt->contas[i]);
            Saque(&cnt->contas[i], saldo_atual);
            printf("Saldo da conta %d zerado com sucesso!\n", num);
            return;
        }
    }
    printf("Conta %d nao encontrada.\n", num);
}