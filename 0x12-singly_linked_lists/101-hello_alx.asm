global main
section .data
hello_world:
    db "Hello, Alx", 0xA, 0

section .text
main:
    mov rax, 1
    mov rdi, 1
    lea rsi, [rel hello_world]
    mov rdx, 11
    syscall
    xor rax, rax
    ret

