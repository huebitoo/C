#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    printf("Ingrese un numero entre 0 y 255: ");
    scanf("%d", &a);
    if(a < 0 || a > 255){
        exit(0);
    }

    printf("Caracter '%c', entero sin signo es %d, octal %o y hexadecimal es %X ", a, a, a, a); // trabajamos solo con los format
}