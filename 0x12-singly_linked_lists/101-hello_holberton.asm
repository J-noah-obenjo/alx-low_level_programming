section .data
    hello_format db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    mov edi, hello_format
    xor eax, eax
    call printf
    mov eax, 0
    ret

