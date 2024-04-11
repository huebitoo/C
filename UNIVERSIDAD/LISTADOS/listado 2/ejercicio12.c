#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palabra[101] = "";
    scanf("%s", palabra);
    int largo = strlen(palabra);

    if(largo > 100){
        return 1;
    }

    int total = 0, aux2 = 0, pond = 0, total2 = 5;
    for(int i = 0; i < largo; i++){
        int aux = palabra[i]-97; // Obtengo el ascii con a = 0
        if (aux < aux2){ // comparo que al aux que tome sea menor a el aux anterior
            pond++; // ponderado aumenta para multiplicar el 26
        }
        total = aux + 26*pond;
        printf("%c", (total-total2)+97);
        aux2 = aux, total2 = total;
    }
}