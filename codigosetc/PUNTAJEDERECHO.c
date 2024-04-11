#include <stdio.h>

int main(){
    int puntajes[5];
    float porcentajes[5], promedio = 0;
    for(int i = 0; i < 5; i++){
        printf("Ingrese: ");
        scanf("%d", &puntajes[i]);
        scanf("%f", &porcentajes[i]);
    }

    for(int i = 0; i < 5; i++){
        promedio += puntajes[i]*porcentajes[i];
    }

    printf("%.1f", promedio);
}