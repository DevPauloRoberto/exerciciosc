#include <stdio.h>
#include <windows.h>

int main(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int contador = 0;

    do{
        SetConsoleTextAttribute(hConsole, contador);
        printf("Contador eh %d\n", contador);
        contador++;
    }while (contador < 16);
}