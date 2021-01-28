			global		ft_list_push_front
			extern		malloc

			section		.text
ft_list_push_front :	push		rsp
			push		rdi
			push		rsi
			mov		rdi, 16
			call		malloc wrt ..plt
			cmp		rax, 0
			je		return
			pop		rsi
			mov		[rax], rsi
			pop		rdi
			mov		r8, [rdi]
			mov		[rax + 8], r8
			mov		[rdi], rax
return :		pop		rsp
			ret
