section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    sub rsp, 8    ; align stack

    mov rdi, hello
    xor eax, eax  ; clear EAX register
    call printf

    ; Print a new line
    mov rdi, newline
    xor eax, eax  ; clear EAX register
    call printf

    add rsp, 8    ; restore stack pointer
    xor eax, eax  ; return 0
    ret

section .data
    newline db 10, 0   ; New line character

