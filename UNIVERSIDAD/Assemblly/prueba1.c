#include <stdio.h>

int esPar(int a);

int main(int argc, char **argv){
    int a = 2;
    !esPar(a) ? printf("Es par") : printf("No es par");
    return 0;
}