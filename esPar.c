#include <stdio.h>

int esPar(int a);

int main(){
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    if(!esPar(a)){
        printf("Es par\n");
    } else {
        printf("No es par\n");
    }
}