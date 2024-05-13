#include <stdio.h>
#include <math.h>

void print_bits(unsigned int x) {
    int i;
    int n = sizeof(x) * 8;

    for (i = n-1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        putchar(x & mask ? '1' : '0');
    }
    putchar('\n');
}


unsigned int srl(int x, int k) {
    if(x < 0){
        unsigned int xsra = (int) x >> k; // Se realiza el desplazamiento aritmético a la derecha
        unsigned int mask = pow(2, 32 - k) - 1; // creamos una mascara que sera de 32-k bits
        return xsra & mask; // aplicamos la mascara para obtener el resultado
    } else {
        return x >> k;
    }
}

unsigned int sra(unsigned int x, int k) {
    int xsrl = (unsigned int) x >> k; // Se realiza el desplazamiento lógico a la derecha
    unsigned int mask = (pow(2, k) - 1);
    mask = mask  << (8 * sizeof(int) - k); // creamos una mascara que sera de 32-k bits
    return xsrl | mask; // aplicamos la mascara para obtener el resultado    
}


int main(){
    int x = -21;
    int k = 1;

    printf("NUMERO ORIGINAL: ");
    print_bits(x);
    printf("\n");
    
    unsigned int valor;

    printf("NUMERO DESPLAZADO LOGICAMENTE A LA DERECHA SRA: ");
    valor = sra(x, k);
    print_bits(valor);
    printf("NUMERO DESPLAZADO ARITMETICAMENTE A LA DERECHA SRL: ");
    valor = srl(x, k);
    print_bits(valor);
}