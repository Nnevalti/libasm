				global		_ft_strlen

				section		.text
; xor return a value only the two are if different
_ft_strlen	:	xor			rax, rax			; same as : mov rax, 0
loop		:	cmp			byte [rdi + rax], 0	; while (*(str + i)) != 0
				je			return				; if *(str + i) == 0 -> return
				inc			rax					; i++
				jmp			loop				;
return		:	ret
