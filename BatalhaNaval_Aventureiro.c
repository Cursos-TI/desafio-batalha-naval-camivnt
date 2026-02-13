#include <stdio.h>

int main() {

    int tabuleiro[10][10];

    // Inicializa tudo com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // NAVIO HORIZONTAL (tamanho 3)
    // Linha 1, colunas 1 a 3
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // NAVIO DIAGONAL 1 - tamanho 3
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;

    // NAVIO DIAGONAL 2 - tamanho 3
    tabuleiro[5][5] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;

    // NAVIO VERTICAL (tamanho 3)
    // Coluna 7, linhas 7 a 9
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[9][7] = 3;

    // Exibe o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
