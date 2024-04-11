#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, suma = 0; // a seria el valor que usaremos para que calcule la suma de todos los numeros de 1 hasta a
    scanf("%d", &a);
    if(a > 10000 || a < -10000){ // validamos a
        exit(0);}
    if(a > 0){
        for(int i = 1; i <= a; i++){ // si a > 0 se cumple, calcularemos la suma hacia el numero positivo n
            suma += i;
        }}
    else{
        for(int i = 1; i >= a; i--){ // en caso de no serlo, calcula desde 1 a el numero negtivo n
            suma += i;
        }}
    printf("%d", suma);
}
// FUNCIONO!!