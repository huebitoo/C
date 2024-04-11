#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, o, x = 0; // n son las cantidad de notas, o un auxiliar y x el contador de una nota satisfactoria
    float r = 0; // este sera el promedio de las notas

    scanf("%d", &n);
    if(n < 1 || n > 10){
        exit(0); // directamente finalizar programa
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &o);
        if(o < 3 || o > 5){ // validamos la nota. Si no cumple el rango, se finaliza el programa
            exit(0);
        }
        if(o == 3){
                x += 1; 
        }
        r += o; // sumas las notas para luego obtener el promedio
    }

    r = r/(float)n; // calculamos el promedio

    if(x == 0){ // si no hay notas satisfactorias (3), trabajaremos con los promedios
        if(r == 5){ 
        printf("Named");
        }
        else if(r >= 4.5){
            printf("High");
        }
        else{
            printf("Common");
        }
    }
    else{ // si hay un 3, no obtiene nada
        printf("None");
    }
} // FUNCIONO!!