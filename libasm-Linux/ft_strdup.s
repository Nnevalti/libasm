		global		ft_strdup
		extern		ft_strlen
		extern		malloc
		extern		ft_strcpy

		section		.text
ft_strdup :	push		rdi
		call		ft_strlen	; rax = ft_strlen(rdi)
		inc		rax		; rax++
		mov		rdi, rax	; rdi	= rax
		call		malloc	wrt ..plt	; rax = malloc(rdi)
		cmp		rax, 0
		je		error
		pop		rdi
		mov		rsi, rdi	; rsi = rdi
		mov		rdi, rax	; rdi = rax
		call 		ft_strcpy	; rax = ft_strcpy(rdi, rsi)
		ret

error :		ret
