#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int aleatorio;

    srand(time(NULL));
        aleatorio = rand();
        printf("Numero e: %d\n", aleatorio);
        printf("Resto da divisao:%d\n", (aleatorio % 200000000000000000) + 1);
}  
