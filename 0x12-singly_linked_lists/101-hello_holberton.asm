; File: 101-hello_holberton.asm
;
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

section .data
message: db 'Hello, Holberton', 10

section .text

global main

main:
	mov     rax, 1
	mov     rdi, 1
	mov     rsi, message
	mov     rdx, 17
	syscall

	mov     rax, 60
	xor     rdi, rdi
	syscall
end:
