#include <stdio.h>
#include <stdlib.h>

int main(){
    int candidatos, votantes, aux; // valores iniciales
    scanf("%d %d", &candidatos, &votantes);
    if(candidatos > 10000 || candidatos < 1 || votantes < 1 || votantes > 10000 ){ // validacion de ellos
        exit(0);
    }
    
    int votos[votantes], comparador[candidatos]; // creamos arreglos que almacenaran valores acontinuacion

    for(int i = 0; i < votantes; i++){
        scanf("%d", &aux);
        if(aux < 1 || aux > candidatos){ // validar que los votos son legitimos, los votos deben partir del candidato 1 a n
            exit(0);
        }
        votos[i] = aux; // almacenar los votos en el arreglo
    }

    aux = 0;
    for(int i = 1; i <= candidatos; i++){ // for para almacenar la cantidad de votos que obtuvo cada candidato
        comparador[i-1] = 0;
        for(int j = 0; j <= votantes; j++){ // recorrer los votos y ver cuantos coinciden con cada candidatos
            if(votos[j] == i){
                comparador[aux] += 1; // sumar 1 por cada voto obtenido
            }
        }
        aux += 1;
    }
    for(int i = 0; i < candidatos; i++){ //for para imprimir los votos y el porcentaje de cada uno
        printf("%.2f%%\n", (comparador[i]/(float)votantes)*100); // formula usada ahi mismo.
    }
}