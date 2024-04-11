#include <stdio.h>

/*
    PARA ESTE CODIGO PILLAMOS UN PATRON, CUANDO SEA PAR LA SECUANCIA ES LA MITAD DEL NUMERO INGRESADO, EN CASO DE SER IMPAR SERIA
    EL NEGATIVO DEL NUMERO MENOS 1 DIVIDO EN 2
*/

int main(){
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("Numero: %d", a/2);
    }
    else{
        printf("Numero: %d", (-1-a)/2);
    }
}