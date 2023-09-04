section .data
hello db 'Hello, Holberton',0
format db '%s',10,0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp
lea rdi, [format]
lea rsi, [hello]
xor eax, eax
call printf
mov rsp, rbp
pop rbp
xor eax, eax
ret
