NAME	=	libasm.a

INC	=	libasm.h

SRCS	=	ft_read.s \
		ft_write.s \
		ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_strdup.s

BONUS	=	ft_list_size_bonus.s \
		ft_list_push_front_bonus.s

OBJS	=	$(SRCS:.s=.o)

OBJS_B	=	$(BONUS:.s=.o)

%.o	:	%.s
		nasm -fmacho64 $<

all	:	$(NAME)

re	:	fclean all

$(NAME) :	$(OBJS)
		ar rc $(NAME) $(OBJS)
		gcc -Wall -Werror -Wextra -o libasm main.c -lasm -L .

bonus	:	$(OBJS_B)
		ar rc $(NAME) $(OBJS_B)
		gcc -Wall -Werror -Wextra -o libasm_bonus main_bonus.c -lasm -L .
clean	:
		-rm $(OBJS)
		-rm $(OBJS_B)

fclean	:	clean
		-rm $(NAME)
		-rm libasm
		-rm libasm_bonus
