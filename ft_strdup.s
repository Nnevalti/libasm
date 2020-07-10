				global		_ft_strdup
				extern		_ft_strlen
				extern		_malloc
				extern		_ft_strcpy

				section		.text		;
_ft_strdup	:	push		rdi
				call		_ft_strlen	;	rax = ft_strlen(rdi)
				inc			rax			;	rax++
				mov			rdi, rax	;	rdi	= rax
				call		_malloc		;	rax = malloc(rdi)
				cmp			rax, 0		;
				je			error		;
				pop			rdi
				mov			rsi, rdi	; 	rsi = rdi
				mov			rdi, rax	;	rdi = rax
				call 		_ft_strcpy	;	rax = ft_strcpy(rdi, rsi)
				ret
error :			ret
