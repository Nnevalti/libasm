			global		_ft_write
			extern		___error

			section		.text
_ft_write :	mov			rax, 0x02000004		;	put in rax write sys funciton
			syscall							;	call write function (in rax)
			jc			error				;	if an error occur jump to error
			ret								;	return
error	:	mov		r8, rax
			push	rbp
			call	___error				; [rax] = errno
			pop		rbp
			mov		[rax], r8
			mov		rax, -1
			ret
