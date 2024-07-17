.section .text
.global asm_ackermann

asm_ackermann:
    sub sp, sp, #32  
    stp x29, x30, [sp, #16] 
    add x29, sp, #16

    str w0, [sp, 4]           
    str w1, [sp, 8]         

    cmp w0, #0               
    bne .L2                  

    ldr w0, [sp, 8]          
    add w0, w0, #1            
    b .L3                   

.L2:
    ldr w0, [sp, 8]          
    cmp w0, #0               
    bne .L4                   

    ldr w0, [sp, 4]      
    sub w0, w0, #1          
    mov w1, #1                
    bl c_ackermann           
    b .L3                     

.L4:
    ldr w1, [sp, 8]          
    sub w1, w1, #1           
    ldr w0, [sp, 4]         
    bl c_ackermann              
    mov w1, w0                  

    ldr w0, [sp, 4]           
    sub w0, w0, #1             
    bl c_ackermann            
    b .L3

.L3:
    ldp x29, x30, [sp, #16]
    add sp, sp, #32
    ret                      
