#include <stdio.h>

double imc(double peso1, double altura1){
    double imc = peso1 / (altura1 * altura1);
    return imc;
}

int main() {
    int idade;
    double altura;
    double peso;
    char inicial;
    char nome[50];
    int contador = 1;

    while (contador == 1){
        printf("Informe a idade: ");
        scanf("%d", &idade);

        printf("Informe a altura: ");
        scanf("%lf", &altura);

        printf("Informe o peso: ");
        scanf("%lf", &peso);

        printf("Informe a inicial: ");
        scanf(" %c", &inicial);

        printf("Informe o nome: ");
        scanf("%s", nome);

        printf("Idade: %d\n", idade);
        printf("Altura: %.2lf\n", altura);
        printf("Peso: %.1lf\n", peso);
        printf("Inicial: %c\n", inicial);
        printf("Nome: %s\n", nome);

        if(idade >= 18){
            printf("Voce eh maior de idade \n");
        }

        else{
            printf("Voce eh menor de idade \n");
        }

        double imcCalculado = imc(peso, altura);

        if(imcCalculado < 18.5){
            printf("Seu imc indica magreza: %.2f\n", imcCalculado);
        }

        else if(imcCalculado < 24.9){
            printf("Seu imc indica normalidade: %.2f\n", imcCalculado);
        }

        else if(imcCalculado < 29.9){
            printf("Seu imc indica sobrepeso: %.2f\n", imcCalculado);
        }

        else if(imcCalculado < 39.9){
            printf("Seu imc indica Obesidade: %.2f\n", imcCalculado);
        }

        else{
            printf("Seu imc indica Obesidade grave: %.2f\n", imcCalculado);
        }

        printf("Se deseja continuar digite - 1\nSe deseja fechar o programa digite - 2: \n");
        scanf("%d", &contador);
    }

    return 0;
}