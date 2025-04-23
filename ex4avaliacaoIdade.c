#include <stdio.h>

int main(){
    int idade;
    int resultado;

    retorno:
    printf("Digite a idade da pessoa: ");
    resultado = scanf("%d", &idade); // Professor, pesquisando, eu aprendi que se eu colocar um scanf dentro de uma variável, ela vai adquirir o valor de 1 se for um sucesso e se falhar retorna 0

    if(resultado == 1){
        if(idade > 120 || idade < 0){
            printf("Somente idades de 0 a 120 anos\n");
            goto retorno;
        }
    }

    if(idade < 12){
        printf("Criança");
    }

    else if(idade < 20){
        printf("Jovem");
    }

    else if(idade < 60){
        printf("Adulto");
    }

    else if(idade < 100){
        printf("Idoso");
    }

    else{
        printf("Mumia");
    }
}