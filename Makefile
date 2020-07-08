NAME	=	libasm.a

CC		=	nasm

SRCS	=	ft_write.s \
			ft_strlen.s \
			ft_strcpy.s

OBJS	=	$(SRCS:.s=.o)

%.o		:	%.s
			$(CC) -fmacho64 $<

all		: $(NAME)

$(NAME) :	$(OBJS)
			ar rc $(NAME) $(OBJS)
			gcc -o $(NAME) main.c -lasm -L .

clean	:
			-rm $(OBJS)

fclean	:	clean
			-rm $(NAME)
