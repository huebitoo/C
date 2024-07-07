#include <stdio.h>
#include <unistd.h>
#include <time.h>

// FUNCIONES ASM
int asm_factorial(int num);
int asm_powi(int base, int exp);
int asm_ackermann(int m, int n);

// FUNCIONES C

int c_ackermann(int m, int n) {
    if(m == 0) return n + 1;
    if(n == 0) return c_ackermann(m - 1, 1);
    return c_ackermann(m - 1, c_ackermann(m, n - 1));
}

int c_powi(int base, int exp) {
    int ret = 1;
    while(exp--) ret *= base;
    return ret;
}

int c_factorial(int n) {
    int ret = 1;
    while(n > 1) {
    ret *= n;
    n--;
    }
    return ret;
}



unsigned int get_tick() {
    struct timespec ts;
    unsigned int tick = 0;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    tick = ts.tv_nsec / 1000000;
    tick += ts.tv_sec * 1000;
    return tick;
}


int main() {
    int tick1 = get_tick_nano();
    //  FACTORIAL 
    for(int i = 0; i < 10000; i++) asm_factorial(12);
    int tick2 = get_tick_nano();
    printf("Factorial asm: %d\n", (tick2 - tick1)/ 1000 );
    tick1 = get_tick_nano();
    for(int i = 0; i < 10000; i++) c_factorial(12);
    tick2 = get_tick_nano();
    printf("Factorial C: %d\n", (tick2 - tick1)/ 1000);
    tick1 = get_tick_nano();
    
    // POWI
    for(int i = 0; i < 10000; i++) asm_powi(2, 30);
    tick2 = get_tick_nano();
    printf("Powi asm: %d\n", (tick2 - tick1)/ 1000);
    tick1 = get_tick_nano();
    for(int i = 0; i < 10000; i++) c_powi(2, 30);
    tick2 = get_tick_nano();
    printf("Powi C: %d\n", (tick2 - tick1)/ 1000);
    tick1 = get_tick_nano();
    
    // ACKERMANN
    int m = 1, n = 0;
    printf("%d \n", c_ackermann(m, n));
    printf("%d \n", asm_ackermann(m, n));

    for(int i = 0; i < 10000; i++) asm_ackermann(m, n);
    tick2 = get_tick();
    printf("Ackermann asm: %d\n", (tick2 - tick1)/ 1000);
    tick1 = get_tick();
    for(int i = 0; i < 10000; i++) c_ackermann(m, n);
    tick2 = get_tick();
    printf("Ackermann C: %d\n", (tick2 - tick1)/ 1000);
    return 0;
}
