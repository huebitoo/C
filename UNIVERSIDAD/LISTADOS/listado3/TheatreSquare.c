#include <stdio.h>

int main(){
    long long n, m, a, lado1, lado2;
    scanf("%lld %lld", &n, &m);
    scanf("%lld", &a);
    lado1 = n/a;
    lado2 = m/a;
    if(n%a > 0){
        lado1++;
    }
    if(m%a > 0){
        lado2++;
    }
    printf("%lld", lado1*lado2);
}