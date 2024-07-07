.section .text
.global asm_powi

asm_powi:
    mov w2, 1                   // ret = 1

.L2:
    cmp w1, 0                   // Comparar exp con 0
    beq .L4                     // Si exp == 0, saltar a .L4
    mul w2, w2, w0              // ret *= base
    sub w1, w1, 1               // exp -= 1
    b .L2                       // Volver a evaluar la condición en .L2

.L4:
    mov w0, w2
    ret                         // Retornar de la función
