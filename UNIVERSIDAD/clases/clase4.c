#include <stdio.h>

int main(int argc, char *argv[]){
    int a, b, suma;
    printf("Ingrese valor de a: ");
    scanf("%d", &a);
    printf("Ingrese valor de b: ");
    scanf("%d", &b);

    suma = a*b;
    printf("La suma es %d \n", suma);
}