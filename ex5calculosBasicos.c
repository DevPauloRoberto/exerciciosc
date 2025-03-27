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

   switch(operacao){
        case '+' :
            produto = numero1 + numero2;
            printf("%d", produto);
            break;
        
        case '-' :
            produto = numero1 - numero2;
            printf("%d", produto);
            break;
        
        case '/' :
            if(numero2 == 0){
                printf("Impossivel dividir por zero\n");
                goto retorno2;
            }
            else{
                 produto = numero1 / numero2;
                printf("%d", produto);
                break;
            }
        
        case '*' :
            produto = numero1 * numero2;
            printf("%d", produto);
            break;

        default :
            printf("somente os caracteres '+', '-', '/', '*' sao permitidos\n");
            while(getchar() != '\n');
            goto retorno3;
    }
}