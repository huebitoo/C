#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char matriz[15][15] = {};

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            matriz[i][j] = '-';
        }
    }

    int x, y, ciclos;
    printf("Ingrese los valores de x e y: ");
    scanf("%d %d", &y, &x);
    printf("Cuantos ciclos quieres: ");
    scanf("%d", &ciclos);
    matriz[15-y][x-1] ='O';

    int largo = 1, ancho = 1;

    for(int pe = 0; pe < ciclos; pe++){ 
        sleep(1);
        system("cls");  
        for(int i = 0; i < 15; i++){ // IMPRIMIR
            printf("|");
            for(int j = 0; j < 15; j++){
                printf("%c ", matriz[i][j]);
                if(matriz[i][j] == 'O'){
                    matriz[i][j] = '-';
                }
            }
            printf("|\n");
        }
        if(x-1 == 0){
            largo = 1;
        }
        if(x-1 == 14){
            largo = -1;
        }
        if(15-y == 0){
            ancho = -1;
        }
        if(15-y == 14){
            ancho = 1;
        }
        x += largo, y += ancho;
        matriz[15-y][x-1] = 'O';
    }
    




}