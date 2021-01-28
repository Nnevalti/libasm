			global		ft_list_size

			section		.text
ft_list_size :	xor			rax, rax	; rax = 0
loop :		cmp			rdi, 0		; end of list ?
		je			return		; true return
		inc			rax		; rax++
		mov			rdi, [rdi + 8]	; get next address
		jmp			loop		; go to loop
return :	ret
