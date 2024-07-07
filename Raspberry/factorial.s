.section .text
.global asm_factorial

asm_factorial:
    // Inicializar la variable de retorno
    mov w1, 1                   // ret = 1

.L2:
    cmp w0, 1                   // Comparar n con 1
    ble .L4                     // Si n <= 1, saltar a .L4

    mul w1, w1, w0              // ret *= n

    sub w0, w0, 1               // n -= 1
    b .L2                       // Volver a evaluar la condición en .L2

.L4:
    mov w0, w1
    ret                         // Retornar de la función
