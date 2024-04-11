#include <stdio.h>

int main(){
    int contador = 0;
    for(int i = 1; i < 1000; i++){
        for (int j = 1; j < i; j++){
            if(i%j == 0){
                contador += j;
            }
        }
        if(contador == i){
            printf("Numero perfecto: %d\n", i);
            contador = 0;
        } else {
            contador = 0;
        }
    }
}