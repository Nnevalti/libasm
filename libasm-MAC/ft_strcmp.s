				global		_ft_strcmp

				section		.text
_ft_strcmp	:	xor			rcx, rcx				; rcx = 0
loop	:		mov			r8b, byte [rsi + rcx]	;
				cmp			r8b, byte [rdi + rcx] 	; cmp char
				jl			retl					;
				jg			retg					;
				cmp			byte [rsi + rcx], 0		;
				je			return					;
				inc			rcx						; rcx++
				jmp			loop					; go to loop

retl		:		mov 		rax, 1
					ret

retg		:		mov			rax, -1
					ret

return		:		mov			rax, 0
					ret
