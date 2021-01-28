						global		_ft_list_push_front
						extern		_malloc

						section		.text
_ft_list_push_front :	push		rsp
						push		rdi
						push		rsi
						mov			rdi, 16
						call		_malloc
						cmp			rax, 0
						je			return
						pop			rsi
						mov			[rax], rsi
						pop			rdi
						mov			r8, [rdi]
						mov			[rax + 8], r8
						mov			[rdi], rax
return :				pop			rsp
						ret
