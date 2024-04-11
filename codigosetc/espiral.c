#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){
    srand(time(0));

    int n;
    printf("Ingrese la dimension NxN de la matriz: ");
    scanf("%d", &n);
    
    int p = 0, a = 0, b = n-1, c = n-1, d = 0;
    int matriz[n][n], numeros[n*n];
    for(int i = 0; i < n*n; i++){
        numeros[i] = rand() % 10;
    }


    for(int i = 0; i < n*n; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n \n");

    for(int i = 0; i < n + (n-1); i++){
        if(i % 4 == 0){ // derecha
            for(int j = d; j < b+1; j++){
                matriz[d][j] = numeros[p];
                p++; // variable aumento
            }
            a++;
        }
        else if(i % 4 == 1){ // abajo
            for(int j = a; j < c+1; j++){
                matriz[j][b] = numeros[p];
                p++; // variable aumento
            }
            b--;
        }
        else if(i % 4 == 2){ // izquieda
            for(int j = b; j >= d; j--){
                matriz[c][j] = numeros[p];
                p++;
            }
            c--;
        }
        else{ // arriba
            for(int j = c; j >= a; j--){
                matriz[j][d] = numeros[p];
                p++;
            }
            d++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


