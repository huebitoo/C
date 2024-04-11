#include <stdio.h>

int main(){
    int a = 3700, time = 9, b;
    printf("Ingrese metros por minuto: ");
    scanf("%d", &b);
    if(b*time >= a){ // Ecuacion itinerario. posicion = pos inicial + velocidad*tiempo, pos inicial = 0.
        printf("se lograra llegar a tiempo");
    }
    else{
        printf("el permiso vencera");
    }
}