#include <stdio.h>

int main(){
    int n; 
    float suma = 0;
    printf("Ingrese el valores de n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        float pe;
        printf("Ingrese el %d valor: ", i+1);
        scanf("%f", &pe);
        suma += pe - ((int) pe); // Lo principal es esto. Despues de obtener el float, le restaremos su parte entera para dejar los decimales 
    }

    printf("Suma es %f \n ", suma);
}