section .data
hello db "Hello, Holberton", 0
newline db 10, 0
section .text
global main
extern printf
main:
push rbp
mov rdi, hello
call printf
mov rdi, newline
call printf
pop rbp
ret
