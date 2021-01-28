			global		_ft_read
			extern		___error

			section		.text
_ft_read :	mov			rax, 0x02000003		;	put in rax write sys funciton
			syscall							;	call read function (in rax)
			jc			error				;	if an error occur jump to error
			ret								;	return
error	:	mov		r8, rax
			push	rbp
			call	___error				; [rax] = errno
			pop		rbp
			mov		[rax], r8
			mov		rax, -1
			ret
