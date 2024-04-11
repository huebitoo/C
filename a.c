#include <stdio.h>

int main(){
    int javier[100];
        for(int i = 0; i < 100; i++){
            if (i != 0){
                javier[i] = i;
            }
        }
        int contador = 0;
        for(int i = 0; i < 100; i++){
            contador = 0;
            for(int j = 1; j < i; j++){
                if (i%j == 0){
                    contador++;
                }
            }
            if(contador == 1){
                printf("%d\n", i);
            }
        }
}