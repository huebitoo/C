#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int minas, n = 10; // numeros de minas
    int mapa[n][n];
    int mapavista[n][n];

    // CREACION Y RELLENO DEL MAPA

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mapavista[i][j] = '#';
            mapa[i][j] = 0; // CREACION DEL MAPA Y RELLENO DEL MISMO CON CEROS
        }
    }

    // CREACION DE LAS MINAS

    printf("Ingrese el numero de minas: ");
    scanf("%d", &minas);
    int x, y; // cordenadas x e y para colocacion de las minas
    for(int i = 0; i < minas; i++){
        while(1){
            x = rand() % 10; // COORDENADA ALEATORIA Y
            y = rand() % 10; // COORDENADA ALEATORIA X
            if(mapa[y][x] == 0){
                mapa[y][x] = 9;
                break;
            }
        }
    }

    // RELLENAR LADOS

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mapa[i][j] == 9){
                for(int x = -1; x < 2; x++){ // NUEVOS FOR PARA PODER GENERAR EL CUADRADO QUE RODEA A LA BOMBA
                    for(int y = -1; y < 2; y++){
                        if(((i+x) < n && (i+x) >= 0) && ((j+y) < n && (j+y) >= 0)){ // IDENTIFICAR LOS POSIBLES VALORES Y COMBINACIONES
                            if(mapa[i+x][j+y] != 9){ // CONDICION EN CASO DE QUE SE TOPE CON UNA BOMBA DENTRO DEL PERIMETRO
                                mapa[i+x][j+y] += 1; // LO QUE MAS ESPERABA
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n");

    // HACIA ARRIBA DE MOMENTO TODO BIEN!!
    // PRINTEO DEL MAPA
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c ", mapavista[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }
}