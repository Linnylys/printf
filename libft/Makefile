SRCS	= ft_isdigit.c ft_tolower.c ft_strchr.c ft_tolower.c ft_atoi.c ft_memset.c ft_strmapi.c ft_isprint.c ft_strdup.c ft_toupper.c ft_bzero.c ft_putchar_fd.c ft_strncmp.c ft_itoa.c ft_striteri.c ft_calloc.c ft_putendl_fd.c ft_strnstr.c ft_memchr.c ft_strjoin.c ft_isalnum.c ft_putnbr_fd.c ft_strrchr.c ft_memcmp.c ft_strlcat.c ft_isalpha.c ft_putstr_fd.c ft_strtrim.c ft_memcpy.c ft_strlcpy.c ft_isascii.c ft_split.c ft_substr.c ft_memmove.c ft_strlen.c


OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= cc

LIB	= ar rc
RM	= rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}  :${OBJS} 
	${LIB} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:		all clean fclean re
