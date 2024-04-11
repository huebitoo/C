#include <stdio.h>

int main()
{
    int a, b = 1; 
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    int c = a;

    /* BUENO, PARA ESTE CODIGO SE ME OCURRIO LA IDEA DE USAR DOS VARIABLES (B, C) QUE SERAN DOS VARIABLES QUE UNA DISMINUIRA
       Y LA OTRA AUMENTARA PARTIENDO LA PRIMERA EN C = MAX Y B DESDE EL 1 PORQUE EL 0 NO PUEDE SER UN ESPACIO.
       CONFORME EL FOR COMPLETE UN CICLO ESTOS VALORES HARAN LO MENCIONADO.
       TAMBIEN ELIMINAREMOS EL VALOR DEL MEDIO PARA QUE NO IMPRIMA DOS FILAS IGUALES
    */
   
    for(int j = 0; j < a; j++){
        for(int i = 0; i < a + 2; i++){
            if(j == a/2){ // eliminar la fila que se repite
                break;
            }
            if(i == b){ // impresion de los espacios
                printf(" ");
            }
            else if(i == c){ // impresion de los espacios
                printf(" ");
            }
            else{
                printf("#");
            }
            if(i == a+1){
                printf("\n");
            }
        }
        b++, c--;
    }
}
