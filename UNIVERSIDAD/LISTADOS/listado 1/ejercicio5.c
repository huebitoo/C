#include <stdio.h>

/*
    PARA ESTE CODIGO SOLO PEDIREMOS EL NIVEL, DIFERENCIAREMOS LOS PARES CON LOS IMPARES A TRAVES DE UN SIMBOLO (+ Y # RESPECTIVAMENTE).
    HAREMOS UN FOR DENTRO DE CADA CICLO DEL FOR PRINCIPAL, CADA FOR SERA UN J = I PARA QUE EL VALOR DE J AUMENTE, EL CUAL SE ENCARGARA
    DE LOS ESPACIOS, CUANDO TERMINE DE REALIZAR EL PRIMER FOR DE LOS ESPACIOS, TERMINARA DE COMPLETAR LOS DEMAS ESPACIOS CON UN CONDICION
    QUE SERÁ J = A, J > I (I ESTA EN AUMENTO CONSTANTE POR LO QUE IMPRIMIRA MENOS CARACTERES CONFORME AVANCE).
*/

int main(){
    int a;
    printf("Ingrese el numero de niveles: ");
    scanf("%d", &a);
    for(int i = 0; i <= a; i++){ // FOR PRINCIPAL
        if(i % 2 == 0){
            for(int j = i; j != 0; j--){ // FOR SECUNDARIOS
                printf(" ");
            }
            for(int j = a; j > i; j--){ // FOR SECUNDARIOS
                printf("+");
            }
        }
        else{
            for(int j = i; j != 0; j--){ // FOR SECUNDARIOS
                printf(" ");
            }
            for(int j = a; j > i; j--){ // FOR SECUNDARIOS
                printf("#");
            }
        }
        printf("\n"); // separador
    }
}