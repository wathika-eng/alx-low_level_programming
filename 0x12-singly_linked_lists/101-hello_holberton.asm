section .data
hello db "Hello, Holberton",10,0  

section .text
global main
extern printf

main:
sub rsp, 8         
mov rdi, hello     
call printf       
add rsp, 8        

mov rax, 60       
xor rdi, rdi      
syscall          

section .data
format db "%s",0
