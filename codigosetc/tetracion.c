#include <stdio.h>

int multi(int *num, int *pond){
    int ponderado = *pond, resultado = 0;
    for(int i = 0; i < ponderado; i++){
        resultado += *num;
    }
    return resultado;
}

int ponde(int *num, int *pond){
    int ponderado = *pond, resultado = 0, numero = *num;
    for(int i = 1; i < ponderado; i++){
        resultado = multi(num, &numero);
        numero = resultado;
    }
    return resultado;
}

int tetracion(int *num, int *pond){
    int ponderado = *pond, resultado = 0, numero = *num;
    for(int i = 1; i < ponderado; i++){
        resultado = ponde(num, &numero);
        numero = resultado;
    }
    return resultado;
}

int main(){
    int num = 2, pond = 4;
    printf("%d", tetracion(&num, &pond));
}