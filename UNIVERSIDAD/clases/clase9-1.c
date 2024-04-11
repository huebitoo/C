#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    printf("Ingrese los numeros: ");
    scanf("%d %d", &n, &m);

    int **matriz = malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        matriz[i] = malloc(m*sizeof(int));
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matriz[i][j] = i*m + j;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int aux = matriz[2][3];
    matriz[2][3] = matriz[3][1];
    matriz[3][1] = aux; aux = matriz[3][m-2];
    matriz[3][m-2] = matriz[n-1][m-1];
    matriz[n-1][m-1] = aux;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        free(matriz[i]);
    }
    free(matriz);
}