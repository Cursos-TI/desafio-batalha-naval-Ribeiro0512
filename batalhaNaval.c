#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializando o tabuleiro
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando navios
    tabuleiro[2][1] = 3; tabuleiro[2][2] = 3; tabuleiro[2][3] = 3; // Horizontal
    tabuleiro[5][5] = 3; tabuleiro[6][5] = 3; tabuleiro[7][5] = 3; // Vertical

    // Exibindo o tabuleiro
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}