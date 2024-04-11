/*
    Memoria dinamica.
    La memoria solicita o libera memoria durante la ejecución.
    malloc() recibe tamaño en bytes y reserva
    free() libera
    calloc() pide memoria pero los inicializa en 0
    realloc() cambiar la memoria

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = malloc(1*sizeof(int)), pe = 1, count = 0;
    do{
        if(count > 0){
            arr = realloc(arr, (count+1) * sizeof(int));
        }
        printf("Ingrese un numero: ");
        scanf("%d", &pe);
        arr[count] = pe;
        count++;
    }while(pe != 0);

    for(int i = 0; i < count-1; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
}