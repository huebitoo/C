#include <stdio.h>
#include <stdlib.h>

int main(){
    // int m[9][9] = { {5, 3, 4, 6, 7, 8, 9, 1, 2},
    //                 {6, 7, 2, 1, 9, 5, 3, 4, 8},
    //                 {1, 9, 8, 3, 4, 2, 5, 6, 7},
    //                 {8, 5, 9, 7, 6, 1, 4, 2, 3},
    //                 {4, 2, 6, 8, 5, 3, 7, 9, 1},
    //                 {7, 1, 3, 9, 2, 4, 8, 5, 6},
    //                 {9, 6, 1, 5, 3, 7, 2, 8, 4},
    //                 {2, 8, 7, 4, 1, 9, 6, 3, 5},
    //                 {3, 4, 5, 2, 8, 6, 1, 7, 9}};

    // Solucion Invalida
    // int m[9][9] = { {9, 1, 2, 3, 4, 5, 6, 7, 8},
    //                 {1, 9, 3, 4, 5, 6, 7, 8, 2},
    //                 {2, 3, 9, 1, 6, 8, 4, 5, 7},
    //                 {3, 2, 1, 9, 7, 4, 8, 6, 5},
    //                 {7, 8, 4, 5, 9, 1, 2, 3, 5},
    //                 {8, 7, 5, 6, 2, 9, 3, 1, 4},
    //                 {4, 5, 6, 7, 8, 3, 9, 2, 1},
    //                 {6, 4, 7, 8, 1, 2, 5, 9, 3},    
    //                 {5, 6, 8, 2, 3, 7, 1, 4, 9}};

    int m[9][9];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            printf("Ingrese el valor (%d, %d): ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    int contador = 0;

    for(int x = 1; x <= 9; x++){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(x == m[i][j]){
                    contador++;
                }
                if(x == m[j][i]){
                    contador++;
                }
                if(contador > 2){
                    printf("No es una solucion.");
                    exit(0);
                }
            }
            contador = 0;
        }
    }

    int repetidor = 0, n = -3, p = 0;

    for(int k = 0; k < 9; k++){
        if(k%3 == 0 && k != 0){
            p += 3, n = 0, repetidor = 0;
        }
        else{
            p = 0, n += 3, repetidor = 0;
        }
        for(int x = 1; x <= 9; x++){ // verifica cada numero de la matriz 3x3
            repetidor = 0;
            for(int i = n; i < (n+3); i++){
                for(int j = p; j < (p+3); j++){
                    if(m[i][j] == x){
                        repetidor += 1;
                    }
                    if(repetidor > 1){
                        printf("Solucion no valida!");
                        exit(0);
                    }
                }
            }
        }
    }

    printf("Solucion valida!");
}