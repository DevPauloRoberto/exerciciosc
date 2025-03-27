#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// #include <windows.h>

int main(){
    // int aleatorio;
    int moeda;
    double valor;
    double conversao;
    // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // srand(time(NULL));
    // while(1){
    //     aleatorio = (rand() % 16 + 1);
    //     switch(aleatorio){
    //         case 1:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;
            
    //         case 2:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 3:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 4:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 5:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 6:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 7:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 8:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 9:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 10:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 11:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 12:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 13:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;
            
    //         case 14:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;

    //         case 15:
    //             SetConsoleTextAttribute(hConsole, aleatorio);
    //             printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    //             break;
    //     }
    // }
    printf("De um valor em reais\n");
    scanf("%lf", &valor);

    retorno:
    printf("Selecione a moeda para converter:\n 1 = Dollar\n 2 = Euro\n 3 = Libra\n");
    scanf("%d", &moeda);

    switch(moeda){
        case 1:
            printf("Valor em Dollar: %.2lf\n", (valor / 5.74));
            break;
        
        case 2:
            printf("Valor em Euro: %.2f\n", (valor / 6.16));
            break;

        case 3:
            printf("Valor em Libra: %.2f\n", (valor / 7.53));
            break;
        
        default:
            printf("Moeda invalida\n");
            goto retorno;
    }
}