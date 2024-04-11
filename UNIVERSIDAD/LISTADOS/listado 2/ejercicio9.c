#include <stdio.h>
#include <string.h>

int main(){
    int n, m;
    printf("Ingrese el numero de cadenas de caracteres y el valor de m: ");
    scanf("%d %d", &n, &m);
    char cad[n*m], aux[25];
    for(int i = 0; i < n; i++){
        printf("ingrese la %d cadena: ", i+1);
        scanf("%s", aux); // pido el texto auxiliar
        strncat(cad, aux, m); // añade los primeros n valores al final de una cadena 
    }
    printf("%s", cad);
}