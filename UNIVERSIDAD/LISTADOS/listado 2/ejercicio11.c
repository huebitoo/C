#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    if(n > 100 || n < 1){
        return 1;
    }
    int aux = n-1, contador = 1, matriz[n][n];
    for(int x = 0; x < (2*n)-1; x++){
        for(int i = 0; i < n; i++){
            if(aux+i < n && aux+i > -1){
                matriz[i][aux+i] = contador;
                contador++;
            }
        }
        aux--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Aceptado