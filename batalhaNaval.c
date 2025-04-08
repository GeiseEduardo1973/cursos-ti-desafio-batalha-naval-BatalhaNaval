#include <stdio.h>
#include <stdlib.h>

    // Batalha Naval - Nível Aventureiro

int main() {

    char linha[10]{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //montando o tabuleiro
    int matriz[10][10]; //declaração da matriz

    // Inicializando os elementos da matriz com '0' (água)

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }

    //colocando o barco vertical (3 posições)
         for (int i = 0; i < 3; i++) {
             for (int j=0;j<3; j++) {
                 matriz[2][7] = 3;
                 matriz[3][7] = 3;
                 matriz[4][7] = 3;
             }
    }

    //colocando o barco na horizontal (3 posições)
      for (int i = 0; i < 3; i++) {
        for (int j=0;j<3; j++) {
            matriz[8][1] = 3;
            matriz[8][2] = 3;
            matriz[8][3] = 3;
        }
    }

    //colocando o barco 1 na Diagonal (3 posições)
    for (int i = 0; i < 3; i++) {
        for (int j=0;j<3; j++) {
            matriz[0][0] = 3;
            matriz[1][1] = 3;
            matriz[2][2] = 3;
        }
    }

    //colocando o barco2 na Diagonal (3 posições)
    for (int i = 0; i < 3; i++) {
        for (int j=0;j<3; j++) {
            matriz[5][9] = 3;
            matriz[6][8] = 3;
            matriz[7][7] = 3;
        }
    }
    //imprimindo o tabuleiro
    printf(" ");
    for (int i = 0; i < 10; i++) {
        printf("%d", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c", linha[i]);
        for (int j = 0; j < 10; j++){
            printf("%d", matriz [i][j]);
        }
    printf("\n");
    }
    return 0;
}
