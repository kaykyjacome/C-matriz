#include <stdio.h>

int main() {
    char nomes[5][50];
    float notas[5][3];
    float media;
    int i, j;

    // Solicitando e armazenando o nome e as notas de cada aluno
    printf("Digite o nome e as tres notas dos cinco alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Notas: ");
        for (j = 0; j < 3; j++) {
            scanf("%f", &notas[i][j]);
        }
    }

    // Calculando a média de cada aluno e exibindo o resultado
    printf("\nMedias dos alunos:\n");
    for (i = 0; i < 5; i++) {
        media = 0;
        for (j = 0; j < 3; j++) {
            media += notas[i][j];
        }
        media /= 3;
        printf("Aluno: %s, Media: %.2f\n", nomes[i], media);
    }

    return 0;
}