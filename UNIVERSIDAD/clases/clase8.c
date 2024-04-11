/* 
    Un puntero es una variable que almacena la direccion de otra variable. En lugar de almacenar directamente un valor.
    Los punteros permiten trabajar sobre esas posiciones de memoria.
    Los punteros tambien son variables y su tamaño es de 8 bytes

    int *p; Asi se declara un puntero

    int p* = NULL; un puntero nulo
    
    int x = 10;
    int *p;
    p = &x; Operacion de direccion

    int y = *p; y ahora contiene el valor almacenado en la direccin de memoria apuntada por p 
*/

#include <stdio.h>

void swap(int *a, int *b){ // Accedemos a la bicacion de a y b
    int y = *a; // Almacenamos el valor que contiene en la ubicacion a
    *a = *b; // Cambian el valor ubicado en la memoria del puntero b
    *b = y; // Cambiamos el valor que contiene el puntero b por el que colocamos en y
}

int main(){
     int a = 3, b = 5;
     printf("a = %d, b = %d\n", a, b);
     swap(&a, &b); // Llamamos a la funcion entregando su ubicacion en la memoria
     printf("a = %d, b = %d", a, b);
}