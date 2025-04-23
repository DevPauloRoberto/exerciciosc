#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int aleatorio;
    srand(time(NULL));
    aleatorio = rand();
    int jogadaMaquina = (aleatorio % 3) + 1;
}