#include <stdio.h>

char jogoDaVelha[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int position;
int win = 1;
int resultado;

void jogadax(){
   for (int i = 0; i < 9; i++) {
    if (position == (i + 1)) {
        jogoDaVelha[i] = 'x';
        break;
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

int posicaoDisponivel(int posicao) {
    if (jogoDaVelha[posicao - 1] == ' ') {
        return 1; // Posição disponível
    } else {
        return 0; // Posição ocupada
    }
}

void ganhoux(){
    if( jogoDaVelha[0] == 'x' && jogoDaVelha[1] == 'x' && jogoDaVelha[2] == 'x' ||
        jogoDaVelha[3] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[5] == 'x' ||
        jogoDaVelha[6] == 'x' && jogoDaVelha[7] == 'x' && jogoDaVelha[8] == 'x' ||
        jogoDaVelha[0] == 'x' && jogoDaVelha[3] == 'x' && jogoDaVelha[6] == 'x' ||
        jogoDaVelha[1] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[7] == 'x' ||
        jogoDaVelha[2] == 'x' && jogoDaVelha[5] == 'x' && jogoDaVelha[8] == 'x' ||
        jogoDaVelha[2] == 'x' && jogoDaVelha[4] == 'x' && jogoDaVelha[6] == 'x'
    ){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("X ganhou\n");
        win = 2;
    }
}

void ganhouo(){
    if( jogoDaVelha[0] == 'o' && jogoDaVelha[1] == 'o' && jogoDaVelha[2] == 'o' ||
        jogoDaVelha[3] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[5] == 'o' ||
        jogoDaVelha[6] == 'o' && jogoDaVelha[7] == 'o' && jogoDaVelha[8] == 'o' ||
        jogoDaVelha[0] == 'o' && jogoDaVelha[3] == 'o' && jogoDaVelha[6] == 'o' ||
        jogoDaVelha[1] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[7] == 'o' ||
        jogoDaVelha[2] == 'o' && jogoDaVelha[5] == 'o' && jogoDaVelha[8] == 'o' ||
        jogoDaVelha[2] == 'o' && jogoDaVelha[4] == 'o' && jogoDaVelha[6] == 'o'
    ){
        printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\n", jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
        printf("O ganhou\n");
        win = 2;
    }
}

int main() {
    inicio_jogo:

    if (jogoDaVelha[0] != ' ' && jogoDaVelha[1] != ' ' && jogoDaVelha[2] != ' ' &&
        jogoDaVelha[3] != ' ' && jogoDaVelha[4] != ' ' && jogoDaVelha[5] != ' ' &&
        jogoDaVelha[6] != ' ' && jogoDaVelha[7] != ' ' && jogoDaVelha[8] != ' ') {
        printf("Empate\n");
        return 0;
    }

    // jogada x
    jogador_x:
    printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\nselecione a posicao que voce quer jogar", 
           jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], 
           jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], 
           jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
    resultado = scanf("%d", &position);
    if (resultado == 1) {
        if (position > 9 || position <= 0) {
            printf("Somente valores 1 a 9\n");
            goto jogador_x;
        } else if (jogoDaVelha[position - 1] != ' ') { // Verifica se a posição está ocupada
            printf("Posicao ja ocupada. Escolha outra.\n");
            goto jogador_x;
        }
    } else {
        printf("Somente numeros\n");
        while (getchar() != '\n'); // Limpa o buffer
        goto jogador_x;
    }

    jogadax();
    ganhoux();

    if (win == 2) {
        return 0;
    }

    // jogada o
    jogador_o:
    printf(" %c|%c|%c\n-------\n %c|%c|%c\n-------\n %c|%c|%c\n\nselecione a posicao que voce quer jogar", 
           jogoDaVelha[0], jogoDaVelha[1], jogoDaVelha[2], 
           jogoDaVelha[3], jogoDaVelha[4], jogoDaVelha[5], 
           jogoDaVelha[6], jogoDaVelha[7], jogoDaVelha[8]);
    resultado = scanf("%d", &position);
    if (resultado == 1) {
        if (position > 9 || position <= 0) {
            printf("Somente valores 1 a 9\n");
            goto jogador_o;
        } else if (jogoDaVelha[position - 1] != ' ') { // Verifica se a posição está ocupada
            printf("Posicao ja ocupada. Escolha outra.\n");
            goto jogador_o;
        }
    } else {
        printf("Somente numeros\n");
        while (getchar() != '\n'); // Limpa o buffer
        goto jogador_o;
    }

    jogadao();
    ganhouo();

    if (win == 2) {
        return 0;
    }

    goto inicio_jogo;
}