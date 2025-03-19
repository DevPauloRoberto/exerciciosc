#include <stdio.h>

char jogoDaVelha[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int position;
int win = 1;
int resultado;

void jogadax(){
   for (int i = 0; i < 9; i++) {
        if (position == (i + 1)) {
            if(jogoDaVelha[i] == ' '){
                jogoDaVelha[i] = 'x';
                break;
            }
            else{
                printf("Posicao ja foi jogada, escolha outra\n");
            }
        }
    } 
}

void jogadao(){
    for (int i = 0; i < 9; i++) {
        if (position == (i + 1)) {
            jogoDaVelha[i] = 'o';
            break;
        }
    } 
}

void ganhoux(){
    if(jogoDaVelha[0] == 'x' && jogoDaVelha[1] == 'x' && jogoDaVelha[2] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[3] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[5] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[6] == 'x' && jogoDaVelha[7] == 'x' && jogoDaVelha[8] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[0] == 'x' && jogoDaVelha[3] == 'x' && jogoDaVelha[6] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[1] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[7] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[2] == 'x' && jogoDaVelha[5] == 'x' && jogoDaVelha[8] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[0] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[8] == 'x'){
        printf("X ganhou\n");
        win = 2;
    }

    else if(jogoDaVelha[2] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[6] == 'x'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }
}

void ganhouo(){
    if(jogoDaVelha[0] == 'o' && jogoDaVelha[1] == 'o' && jogoDaVelha[2] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
    
        win = 2;
    }

    else if(jogoDaVelha[3] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[5] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }

    else if(jogoDaVelha[6] == 'o' && jogoDaVelha[7] == 'o' && jogoDaVelha[8] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }

    else if(jogoDaVelha[0] == 'o' && jogoDaVelha[3] == 'o' && jogoDaVelha[6] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }

    else if(jogoDaVelha[1] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[7] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }

    else if(jogoDaVelha[2] == 'o' && jogoDaVelha[5] == 'o' && jogoDaVelha[8] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }

    else if(jogoDaVelha[0] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[8] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }

    else if(jogoDaVelha[2] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[6] == 'o'){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        
        win = 2;
    }
}

int main() {

    while(win == 1){

        if(jogoDaVelha[0] != ' ' && jogoDaVelha[1] != ' ' && jogoDaVelha[2] != ' ' && jogoDaVelha[3] != ' ' && jogoDaVelha[4] != ' ' && jogoDaVelha[5] != ' ' && jogoDaVelha[6] != ' ' && jogoDaVelha[7] != ' ' && jogoDaVelha[8] != ' '){
            printf("Empate");
            return 0;
        }

        while(1){

            printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\nselecione a posicao que voce quer jogar", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
            resultado = scanf("%d", &position);
            if(resultado == 1){
                if(position > 9 || position <= 0){
                    printf("Somente valores 1 a 9\n");
                    printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\nselecione a posicao que voce quer jogar", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
                    scanf("%d", &position);
                    while(getchar() != '\n');
                }
                else{
                    break;
                }
            }
            else{
                printf("somente numeros\n");
                while(getchar() != '\n'); // Professor após pesquisa, e muitos loops infinitos, descobri a existencia do "buffer", e que caso ele receba um caracter inválido ele fica lá e preciso limpa-lo senão o sistema entra em looping de erro, aprendi que com o while(getchar() != '\n')  vai lendo 1 caracter errado por vez e como não está em uma variável ele não salva em nada e ele some, até encontrar a quebra de linha que é o enter do usuário, sabendo assim que o buffer está limpo
            }
        }
        jogadax();
        ganhoux();
        ganhouo();

        if(win == 2){
            return 0;
        }

        if(jogoDaVelha[0] != ' ' && jogoDaVelha[1] != ' ' && jogoDaVelha[2] != ' ' && jogoDaVelha[3] != ' ' && jogoDaVelha[4] != ' ' && jogoDaVelha[5] != ' ' && jogoDaVelha[6] != ' ' && jogoDaVelha[7] != ' ' && jogoDaVelha[8] != ' '){
            printf("Empate");
            return 0;
        }

        while(1){
            printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\nselecione a posicao que voce quer jogar", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);

            resultado = scanf("%d", &position);
            if(resultado == 1){
                if(position > 9 || position <= 0){
                    printf("Somente valores 1 a 9\n");
                    scanf("%d", &position);
                    while(getchar() != '\n');
                }
                else{
                    break;
                }
            }
            else{
                printf("somente numeros\n");
                while(getchar() != '\n'); // Professor após pesquisa, e muitos loops infinitos, descobri a existencia do "buffer", e que caso ele receba um caracter inválido ele fica lá e preciso limpa-lo senão o sistema entra em looping de erro, aprendi que com o while(getchar() != '\n')  vai lendo 1 caracter errado por vez e como não está em uma variável ele não salva em nada e ele some, até encontrar a quebra de linha que é o enter do usuário, sabendo assim que o buffer está limpo
            }
        }
        jogadao();
        ganhoux();
        ganhouo();
    }
    return 0;
}