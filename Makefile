# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialousse <ialousse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 17:47:23 by ialousse          #+#    #+#              #
#    Updated: 2022/07/31 17:47:35 by ialousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -rf
cc = gcc
FLAGS = -Wall -Wextra -Werror
NORMINETTE = norminette -R CheckDefine

INC = \
			libft.h \
			
SRC = \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_bzero.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_striteri.c \
			ft_calloc.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_itoa.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strtrim.c \
			ft_split.c \

SRCS = $(SRC)
OBJS = $(addsuffix .o, $(basename $(SRC)))
INCS = $(addprefix -I, $(INC))

all : $(NAME)

$(NAME) : $(OBJS)
		ar rcs $@ $^

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.c.o: $(SRCS)
		$(CC) -c -o $@ $< $(FLAGS)

norm:
		$(NORMINETTE)