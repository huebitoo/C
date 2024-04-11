#include <stdio.h>
#include <math.h>

int main(){

    int matriz[8][8] = {};
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            matriz[i][j] = ' '; // ascii 32 = " "
        }
    }


    char posicion[2];
    int letra, numero;
    printf("Ingrese la posicion (primero la letra y luego el número, ejemplo 'd4'): ");
    scanf("%s", posicion);
    letra = (char) posicion[0]-97; // posicion en x
    numero = (char) posicion[1]-49; // posicion en y

    for(int i = 0; i < 8; i++){
        if((7-numero)+i < 8 && letra+i < 8){
            matriz[(7-numero)+i][letra+i] = 88;
        }
    }
    for(int i = 0; i < 8; i++){
        if((7-numero)-i > -1 && letra + i < 8){
            matriz[(7-numero)-i][letra+i] = 88;
        }
    }
    for(int i = 0; i < 8; i++){
        if((7-numero)-i > -1 && letra - i > -1){
            matriz[(7-numero)-i][letra-i] = 88;
        }
    }
    for(int i = 0; i < 8; i++){
        if((7-numero)+i < 8 && letra - i > -1){
            matriz[(7-numero)+i][letra-i] = 88;
        }
    }
    matriz[7-numero][letra] = 65;

    printf("  -------------------\n");
    for(int i = 0; i < 8; i++){
        printf("%d | ", 8-i);
        for(int j = 0; j < 8; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("|\n");
        if(i == 7){
            printf("  -------------------\n    a b c d e f g h");
        }
    }
    
}