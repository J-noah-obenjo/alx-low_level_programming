section .data
    format db "Hello, World!", 0

section .text
    global _start

_start:
    ; write the string to stdout
    mov eax, 4
    mov ebx, 1
    mov ecx, format
    mov edx, 13
    int 0x80

    ; exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80

