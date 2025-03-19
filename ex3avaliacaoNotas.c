#include <stdio.h>

int main(){
    int nota;
    int resultado;

    retorno:
    printf("Digite a nota do aluno: ");
    resultado = scanf("%d", &nota); // Professor, pesquisando, eu aprendi que se eu colocar um scanf dentro de uma variável, ela vai adquirir o valor de 1 se for um sucesso e se falhar retorna 0

    if(resultado == 1){
            if(nota > 10 || nota < 0){
            printf("Somente notas de 0 a 10\n");
            goto retorno;
        }
    }
    else{
        printf("somente numeros\n");
        while(getchar() != '\n');
        goto retorno; // Professor após pesquisa, e muitos loops infinitos, descobri a existencia do "buffer", e que caso ele receba um caracter inválido ele fica lá e preciso limpa-lo senão o sistema entra em looping de erro, aprendi que com o while(getchar() != '\n')  vai lendo 1 caracter errado por vez e como não está em uma variável ele não salva em nada e ele some, até encontrar a quebra de linha que é o enter do usuário, sabendo assim que o buffer está limpo
    }

    if(nota >= 9){
        printf("Conceito A");
    }

    else if(nota >= 7){
        printf("conceito B");
    }

    else if(nota >= 5){
        printf("conceito C");
    }

    else if(nota >= 3){
        printf("conceito D");
    }

    else{
        printf("Reprovado");
    }

    return 0;
}