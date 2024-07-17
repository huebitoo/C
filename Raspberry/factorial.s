.section .text
.global asm_factorial

asm_factorial:
    mov w1, 1                   

.L2:
    cmp w0, 1                  
    ble .L4                    

    mul w1, w1, w0              

    sub w0, w0, 1              
    b .L2                   

.L4:
    mov w0, w1
    ret                    
