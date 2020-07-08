				global		_ft_strcpy

				section		.text
_ft_strcpy	:	xor		rcx, rcx					;	i = 0
loop	:		mov		r8b, byte [rdi + rcx]		;	(char)tmp = str1[i]
				mov		byte [rsi + rcx], r8b		;	str2[i] = tmp
				cmp		byte [rdi + rcx], 0			;	str1[i] == 0 ?
				je		return						;	if true return
				inc		rcx							;	i++
				jmp		loop						;	aller a loop
return :		mov		rax, rdi					;	rax (return register)
				ret
