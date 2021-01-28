		global		ft_write
		extern		__errno_location

		section		.text
ft_write :	mov		rax, 1		; put in rax write sys funciton
		syscall				; call write function (in rax)
		cmp		rax, 0
		jl		error		; an error occur jump to error
		ret				; return

error :		neg		rax		; get rax absolute value
		mov		rdi, rax	; save rax in rdi
		call		__errno_location wrt ..plt
		mov		[rax], rdi
		mov		rax, -1
		ret
