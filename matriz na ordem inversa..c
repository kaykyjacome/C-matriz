#include <stdio.h>

int main(){
int matriz [3][3];
int i, j;

for(i=0;i<3;i++){
for (j=0;j<3;j++){
    printf("elementos %d %d", i,j);
    scanf("%d", &matriz[i][j]);
}
}
printf("\nElementos da matriz na ordem inversa:\n");
    for (i = 2; i >= 0; i--) {
        for (j = 2; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

