#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int a;
    printf("Ingrese el largo del arreglo: ");
    scanf("%d", &a);

    int arreglo[a], coord = 0;
    for(int i = 0; i < a; i++){
        arreglo[i] = 0;
    }

    // for(int i = 0; i < a; i++){  METODO PARA RELLENO ALEATORIO
    //     while(1){
    //         coord = rand() % a;
    //         if(arreglo[coord] == 0){
    //             arreglo[coord] = i;
    //             break;
    //         }
    //     }
        
        
    // }

    for(int i = 0; i < a; i++){ // RELLENO MANUAL
        printf("Ingrese el %d valor: ", i+1);
        scanf("%d", &arreglo[i]);
    }

    int contador = 0, contador2 = 0, respaldo[a], respaldo2[a], aux = 0;

    for(int i = 0; i < a; i++){ // llenamos el arreglo con un numero lo suficientemente grande
        respaldo[i] = 999999;
    }

    for(int x = 0; x < a; x++){
        aux = x;
        while(1){
            aux = arreglo[aux];
            if(aux == respaldo[0]){
                if(contador > contador2){
                    contador2 = contador;
                    for(int y = 0; y < a; y++){
                        if(respaldo[y] != 999999){
                            respaldo2[y] = respaldo[y];
                        }
                        else{
                            break;
                        }
                    }
                    break;
                }
                break;
            }
            else{
                respaldo[contador] = aux;
                
            }
            contador++;
        }
        contador = 0;
        for(int k = 0; k < a; k++){
            respaldo[k] = 999999;
        }
    }

    printf("El ciclo maximo es de %d siendo ", contador2);
    for(int i = 0; i < contador2; i++){
        printf("%d ", respaldo2[i]);
    }

    printf("\n");
    printf("\n");

    for(int i = 0; i < a; i++){ // llenamos el arreglo con 0
        printf("%d ", arreglo[i]);
    }
}