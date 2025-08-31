global main
extern printf

section .data
msg:
    db "Hello, ALX", 0xA, 0

section .text
main:
    mov rdi, msg
    xor rax, rax
    call printf
    xor rax, rax
    ret

