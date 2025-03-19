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
    else{
        printf("somente numeros\n");
        while(getchar() != '\n'); // Professor após pesquisa, e muitos loops infinitos, descobri a existencia do "buffer", e que caso ele receba um caracter inválido ele fica lá e preciso limpa-lo senão o sistema entra em looping de erro, aprendi que com o while(getchar() != '\n')  vai lendo 1 caracter errado por vez e como não está em uma variável ele não salva em nada e ele some, até encontrar a quebra de linha que é o enter do usuário, sabendo assim que o buffer está limpo
        goto retorno;
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