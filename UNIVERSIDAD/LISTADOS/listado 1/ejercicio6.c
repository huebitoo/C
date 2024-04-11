#include <stdio.h>
#include <math.h>

/*
    QUISE PROBAR TRABAJARLO CON FUNCIONES PARA NO ALARGAR EL CODIGO PRINCIPAL. 
    ES SIMPLE EL PROBLEMA, PEDIMOS A, B, C Y N DONDE LOS PRIMEROS 3 SON NUMEROS Y EL ULTIMO EL EXPONENTE.
    EL PROBLEMA DICE QUE A^N + B^N = C^N NO SE CUMPLE, POR LO MENOS HASTA EL MOMENTO SABEMOS ESO. POR LO TANTO CADA VE QUE NO SE CUMPLA
    PRINTEARA UN "Eureka!", TAMBIEN TIENE SUS VALIDADORES Y POR SI ES POSIBLE CONFIRMAS QUE EXISTE UN A^N + B^N = C^N PRINTEAREMOS EL MENSAJE
    USE LA BIBLIOTECA MATH.H PARA USAR EL POW Y TRABAJAR CON DATOS DOUBLE. EL CODIGO NO TIENE DIFICUTADES EN LECTURA 
*/

int elevados(double a, double b,double c,double n){ 
    double x = pow(a, n), y = pow(b, n), z = pow(c, n); // DEFINIMOS LOS VALORES DE VARIABLES LOCALES DE LA FUNCIONES
    if(x + y == z){ // COMPARAR
        printf("Oh no! Fermat se equivoco.");
    }
    else{
        printf("Eureka!");
    }
    return 0;
}

int main(){
    double a, b, c, n, pe;
    printf("Ingrese a, b, c y n respectivamente (Use espacios para separar numeros): ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &n);

    if(a > 0 || b > 0 || c > 0){
        if(n > 2){
            elevados(a, b, c, n); // LLAMAMOS A LA FUNCION
        }
        else{
            printf("Fermat se aplica con n > 2");
        }
    }
    else{
        printf("No se puede calcular.\n");
    }
}