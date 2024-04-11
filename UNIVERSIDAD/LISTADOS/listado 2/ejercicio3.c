#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Ingrese un numero negativo: ");
    scanf("%d", &num);
    if(num >= 0){
        exit(0);
    }

    int a = sizeof(num) * 8;
    for(int i = 0; i < a; i++){
        printf("%d", (num >> (a-i-1)&1));
    }

}