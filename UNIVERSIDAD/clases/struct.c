#include <stdio.h>
#include <string.h>

typedef struct{
    int edad;
    int año;
    char comentario[50];
}Datos;

void queseso(Datos cl){
    printf("Su edad es de %d años y el año es %d. \n Comentario: %s", cl.edad, cl.año, cl.comentario);
}

int main(){
    Datos javier;
    javier.edad = 19;
    javier.año = 2004;
    char a[50];
    printf("Ingrese comentario: ");
    scanf("%[^\n]s", a);
    strcpy(javier.comentario, a);
    // Otra forma de hacerlo es de la siguiente manera
    queseso(javier);
}