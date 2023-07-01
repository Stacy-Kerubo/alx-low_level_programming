section .data
    format db 'Hello, Holberton', 0
    len equ $ - format

section .text
    extern printf

global main
main:
    sub rsp, 8   ; align stack pointer to a multiple of 16
    mov edi, format
    xor eax, eax
    call printf

    add rsp, 8   ; restore the stack pointer

    mov eax, 60  ; sys_exit system call number
    xor edi, edi ; exit status 0
    syscall      ; invoke the system call

section .data

