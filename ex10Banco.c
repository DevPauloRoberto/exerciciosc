#include <stdio.h>

double saldoConta;
int resultado;

void mensagem(){
    printf("Digite o numero da operacao que deseja fazer:\n1.Saldo\n2.Deposito\n3.Sacar\n4.Sair\n");
}

void sacar(double *saldo){
    double saque;
    printf("Digite o valor que deseja sacar:\n");
    resultado = scanf("%lf", &saque);

    if(resultado == 1){
        if(saque > 0){
            if(saque <= *saldo){
                *saldo = *saldo - saque;
            }
            else{
                printf("Saldo insuficiente para realizar saque.\n");
            }
        }
        else{
            printf("somente valores positivos.\n");
        }
    }

    else{
        printf("somente numeros\n");
        while(getchar() != '\n');
    }
}

void depositar(double *saldo){
    double valorDeposito;
    deposito:
    printf("Digite o valor que deseja depositar:");
    resultado = scanf("%lf", &valorDeposito);

    if(resultado == 1){
        if(valorDeposito > 0){
            *saldo = *saldo + valorDeposito;
        }
        else{
            printf("Somente valores positivos.\n");
        }
    }
    else{
        printf("somente numeros\n");
        while(getchar() != '\n');
    }
}

void saldo(){
    printf("Seu saldo eh de: R$%.2f\n", saldoConta);
}

int main (){

    saldoConta = 1000.00;
    int operacao;

    inicio:
    mensagem();
    scanf(" %d", &operacao);

    if(operacao == 1){
        saldo();
    }

    else if(operacao == 3){
        sacar(&saldoConta);
    }

    else{
        depositar(&saldoConta);
    }

    if(operacao != 4){
        goto inicio;
    }
}