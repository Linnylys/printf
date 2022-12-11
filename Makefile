SRCS	= printf_tool.c ft_printf.c


OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= cc

LIB	= ar -rc
RM	= rm -f

CFLAGS = -Wall -Werror -Wextra 


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${NAME}  :${OBJS} 
	make -C ./libft
	cp libft/libft.a ${NAME}
	${LIB} ${NAME} ${OBJS}  


all:	${NAME}

clean:
	make clean -C ./libft
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:		all clean fclean re
