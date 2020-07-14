NAME	=	libasm.a

CC		=	nasm

INC		=	libasm.h

SRCS	=	ft_write.s \
			ft_read.s \
			ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_strdup.s \
			ft_list_size_bonus.s \
			ft_list_push_front_bonus.s \

OBJS	=	$(SRCS:.s=.o)

%.o		:	%.s
			$(CC) -fmacho64 $<

all		: $(NAME)

re		:	fclean all

$(NAME) :	$(OBJS)
			ar rc $(NAME) $(OBJS)
			gcc -I $(INC) -o libasm main.c -lasm -L .

clean	:
			-rm $(OBJS)

fclean	:	clean
			-rm $(NAME)
			-rm libasm
