		global	ft_strlen

		section	.text
ft_strlen :	xor	rax, rax		; same as : mov rax, 0
loop :		cmp	byte [rdi + rax], 0	; while (*(str + i)) != 0
		je	return			; if *(str + i) == 0 -> return
		inc	rax			; i++
		jmp	loop

return :	ret
