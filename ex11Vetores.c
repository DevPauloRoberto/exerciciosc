#include <stdio.h>

int main(){
    char nomes[3][30];

    int posicao = sizeof(nomes) / sizeof(nomes[0]);

    for (int i = 0; i < posicao; i++){
        printf("Informe o nome de numero: %d\n", i + 1);
        scanf("%s", &nomes[i]);
    }

    for (int i = 0; i < posicao; i++){
        printf("%s\n", nomes[i]);
    }

    int valores[5] = {5, 10, 15, 30, 18};
    int maiorValor = 0;
    int posicao2 = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i <= posicao; i++){
        if(valores[i] > maiorValor){
            maiorValor = valores[i];
        }
    }

    printf("maior valor eh de: %d", maiorValor);
}