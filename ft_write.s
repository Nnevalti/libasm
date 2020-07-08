			global		_ft_write

			section		.text
_ft_write :	mov			rax, 0x02000004		;	put in rax write sys funciton
			syscall							;	call write function (in rax)
			ret								;	return
