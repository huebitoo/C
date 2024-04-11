#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    scanf("%[^\n]s", a);

    char *palabra;
    char *delimitador = " ";

    palabra = strtok(a, delimitador); // Primera palabra

  // Mientras queden palabras por imprimir, continuamos
    while( palabra != NULL ) {
        printf("%s\n", palabra);
        palabra = strtok(NULL, delimitador);
    }
}