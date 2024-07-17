.section .text
.global asm_powi

asm_powi:
    mov w2, 1                 

.L2:
    cmp w1, 0               
    beq .L4                    
    mul w2, w2, w0             
    sub w1, w1, 1               
    b .L2                       

.L4:
    mov w0, w2
    ret                         
