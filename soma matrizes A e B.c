#include <stdio.h>

int main(){
    int matrizA[2][3], matrizB[2][3], soma[2][3];
    int i, j;

    printf("elementod da matriz A (2x3)\n");
    for ( i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("elementos %d %d", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        
        printf("\nDigite os elementos da matriz B (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Calculando a soma das matrizes A e B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Exibindo a soma das matrizes
    printf("\nSoma das matrizes A e B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}