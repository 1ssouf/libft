NAME = libft.a
SRCS = 		ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_striteri.c \		
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \

OBJS	= ${SRCS:.c=.o}

INCS	= .

LIB		= ar rcs
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
${NAME}:	${OBJS}
			${LIB} ${NAME} ${OBJS} 

all:		${NAME}

norm:
			norminette
clean:
			${RM} ${OBJS} ${OBJS_b}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o bonus norm