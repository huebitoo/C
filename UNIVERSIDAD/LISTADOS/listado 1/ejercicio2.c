#include <stdio.h>

int main(){
    int a;

    printf("Ingrese un decimal: ");
    scanf("%d", &a);

    int contador = 0, x = a;
    while(x != 0){ // largo del arreglo, para determinar los bits necesarios.
        contador++;
        x /= 2;
    }

    contador++;
    int j = contador;
    int binario[contador];

    if(a >= 0){ // en caso de ser positivo, usaremos la notacion normal
        for(int i = contador-1; i >= 0; i--){
            binario[i] = a%2; // dividir el numero y extraer el resto constantemente. 
            a /= 2;
        }
    }
    else if(a < 0){ // negativo
        a *= -1; // transformaremos el numero a un
        for(int o = contador-1; o >= 0; o--){
            if(a%2 == 0){ // si el resto es 0, lo transformamos a un 1
                binario[o] = 1;
            }
            else{
                binario[o] = 0;
            }
            a /= 2; 
        }
        binario[j-1] += 1; // luego por complemento dos, debemos sumas un 1 al final y comprobar si hay algun bit con un numero distinto de 1-0
            for(int i = contador-1; i != 0; i--){
                if(binario[i] > 1){
                    binario[i] = 0;
                    binario[i-1] += 1;
                }
            }
    }

    for(int i = 0; i < j; i++){
        printf("%d", binario[i]); // printeo del arreglo
    }
}