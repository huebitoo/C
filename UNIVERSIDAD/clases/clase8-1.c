#include <stdio.h>

int main(){
    char a[7] = "bananas";
    long long result = 0;
    char *p = a;
    
    for(int i = 0; i < 7; i++){
        result |= *(p+i);
        result <<= 8;
    }

    printf("%lld\n", result); // lld imprime un long long
}