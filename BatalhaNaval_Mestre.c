#include <stdio.h>
#include <stdlib.h>

int main() {

    int tab[10][10];
    int cone[5][5];
    int cruz[5][5];
    int oct[5][5];

    int i, j;

    // Tudo começa como água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tab[i][j] = 0;
        }
    }

    // 3 navios simples
    tab[2][2] = 3; tab[2][3] = 3; tab[2][4] = 3;

    // ==========================
    // MATRIZ CONE (5x5)
    // forma:
    //   1
    //   1 1 1
    //   1 1 1 1 1
    // ==========================
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // MATRIZ CRUZ
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // MATRIZ OCTAEDRO (5x5)

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            // distância até o centro (2,2)
            int d = abs(i - 2) + abs(j - 2);

            if (d <= 2)
                oct[i][j] = 1;
            else
                oct[i][j] = 0;
        }
    }

    // SOBREPOSIÇÃO DAS HABILIDADES NO TABULEIRO

    int origem_r = 5, origem_c = 5; // centro

    // --- sobrepor CRUZ no tabuleiro (valor 5)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            if (cruz[i][j] == 1) {

                int r = origem_r - 2 + i;
                int c = origem_c - 2 + j;

                if (r >= 0 && r < 10 && c >= 0 && c < 10)
                    tab[r][c] = 5;
            }
        }
    }

    // IMPRIMIR TABULEIRO FINAL

    printf("\nTABULEIRO FINAL:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
