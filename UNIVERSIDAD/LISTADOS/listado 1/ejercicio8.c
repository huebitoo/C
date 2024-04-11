#include <stdio.h>

/*
    ACÁ PEDIREMOS EL NUMERO  A Y B, A SIENDO EL MODULO Y B EL RANGO.
    COMO PIDE EL EJERCICIO A SERA EL NUMERO PARA OBTENER EL RESTO Y B LA CANTIDAD DE VECES QUE SE REALIZARA EL PROCESO
*/

int main(){
    int a, b;
    printf("Ingresa el rango y el modulo respectivamente: ");
    scanf("%d %d", &a, &b);
    for(int i = 0; i <= b; i++){
        printf("%d ", i%a); // IMPRIMIR DE MANERA INMEDIATA EL RANGO
    }
}