		global	ft_strcpy

		section	.text
ft_strcpy :	xor	rcx, rcx		;	i = 0
loop :		mov	r8b, byte [rsi + rcx]	;	(char)tmp = str1[i]
		mov	byte [rdi + rcx], r8b	;	str2[i] = tmp
		cmp	byte [rdi + rcx], 0	;	str1[i] == 0 ?
		je	return			;	if true return
		inc	rcx			;	i++
		jmp	loop			;	aller a loop

return :	mov	rax, rdi		;	rax (return register)
		ret
