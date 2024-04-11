#include <stdio.h>

int main(){
    int n; 
    float result = 0, a;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for(int i = n; i != 0; i--){ // FOR DE N ---> 0
        a = (1 / (float)i); // debemos colocar el (float) para la division con resultados decimales
        result += a;
    }
    printf("%.3f", result);
}