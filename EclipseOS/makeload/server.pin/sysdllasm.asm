.load
.init
_system
_file


section .data:
    MOV RAX, 3
    MOV EAX, 3
    int 0x43
    db "0x00045" $-equ

section .main:
    MOV RAX, 34
    .load:
        mov dx, 4
        memory-> dx, 4
        ret

section .main2:
    mov eax, 3