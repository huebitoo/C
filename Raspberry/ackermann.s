.section .text
.global asm_ackermann

asm_ackermann:
    sub sp, sp, #32  
    stp x29, x30, [sp, #16] 
    add x29, sp, #16

    // Guardar los argumentos m (r0) y n (r1) en el marco de pila
    str w0, [sp, 4]            // Guardar m en la pila
    str w1, [sp, 8]            // Guardar n en la pila

    cmp w0, #0                  // Comparar m con 0
    bne .L2                     // Si m != 0, saltar a .L2

    ldr w0, [sp, 8]            // Cargar n en r0
    add w0, w0, #1              // n + 1
    b .L3                       // Saltar a .L3

.L2:
    ldr w0, [sp, 8]            // Cargar n en r0
    cmp w0, #0                  // Comparar n con 0
    bne .L4                     // Si n != 0, saltar a .L4

    ldr w0, [sp, 4]            // Cargar m en r0
    sub w0, w0, #1              // m - 1
    mov w1, #1                  // n = 1
    bl c_ackermann              // Llamar a c_ackermann
    b .L3                       // Saltar a .L3

.L4:
    ldr w1, [sp, 8]            // Cargar n en r0
    sub w1, w1, #1              // n - 1
    ldr w0, [sp, 4]            // Cargar m en r0
    bl c_ackermann              // Llamar a c_ackermann
    mov w1, w0                  // Guardar el resultado en r2

    ldr w0, [sp, 4]            // Cargar m en r0
    sub w0, w0, #1              // m - 1
    bl c_ackermann              // Llamar a c_ackermann
    b .L3

.L3:
    ldp x29, x30, [sp, #16]
    add sp, sp, #32
    ret                       // Retornar de la función
