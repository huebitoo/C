#include <stdio.h>

int main(){
    int x;


    /*
        USAREMOS LOS IF PARA PASAR DE UNA FUNCION A OTRA (FUNCION POR TRAMO). 
    */

    printf("Ingrese el numero: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if(i <= 5){ // primera función 
            printf("%d ", 2*i);
        }
        else if(i > 5 && i <= 13){ // segunda función
            printf("%d ", (i*i)-(3*i)+2);
        }
        else{ // tercera función
            printf("%.2f ", (100/(float)i) + 3);
        }
    }
}