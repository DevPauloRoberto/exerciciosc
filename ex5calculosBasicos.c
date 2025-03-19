#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int produto;
    char operacao;
    int resultado;

    retorno1:
    printf("Digite o primeiro numero: ");
    resultado = scanf("%d", &numero1);

    if(resultado == 0){
        printf("somente numeros\n");
        while(getchar() != '\n');
        goto retorno1;
    }

    retorno2:
    printf("Digite o segundo numero: ");
    resultado = scanf("%d", &numero2);

    if(resultado == 0){
        printf("somente numeros\n");
        while(getchar() != '\n');
        goto retorno2;
    }

    retorno3:
    printf("Digite a operacao a ser feita: ");
    scanf(" %c", &operacao);

    if(operacao == '+' || operacao == '-' || operacao == '/' || operacao == '*'){
        if(operacao == '+'){
            produto = numero1 + numero2;
            printf("%d", produto );
        }

        else if(operacao == '-'){
            produto = numero1 - numero2;
            printf("%d", produto );
        }

        else if(operacao == '/'){
            produto = (numero1 / numero2);
            printf("%d", produto );
        }

        else{
            produto = numero1 * numero2;
            printf("%d", produto );
        }
    }

    else{
        printf("somente os caracteres '+', '-', '/', '*' sao permitidos\n");
        while(getchar() != '\n');
        goto retorno3;
    }
}