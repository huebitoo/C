#include <stdio.h>

void flippingBits(int n){
    unsigned int a = ~0;
    n ^= a;
    printf("%u\n", n);
}

int main(){
    int pe;
    scanf("%d", &pe);
    for(int i = 0; i < pe; i++){
        unsigned int n;
        scanf("%d", &n);
        flippingBits(n);
    }
}// Aceptado