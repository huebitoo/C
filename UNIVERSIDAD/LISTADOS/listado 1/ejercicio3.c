#include <stdio.h>

int main(){
    int x, b;
    printf("Ingrese a y b respectivamente: ");
    scanf("%d %d", &x, &b); // x es el valor que usaremos para comparar, b seria la cantidad de numeros a comparar
    
    int a[b];
    
    for(int i = 0; i < b; i++)
    {
        printf("Agregue un numero: ");
        scanf("%d", &a[i]); // agregar numeros al arreglo
    }

    for(int i = 0; i < b; i++)
    {
        if(a[i] > x) // condicion que sea mayor a x
        {
            printf("%d ", a[i]);
        }
    }
}