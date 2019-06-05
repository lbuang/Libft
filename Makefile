# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 16:16:14 by lbuang            #+#    #+#              #
#    Updated: 2019/06/05 16:16:37 by lbuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = ./ft_isascii.c ./ft_strcat.c	./ft_strlen.c	./ft_strstr.c \
./ft_atoi.c	./ft_isdigit.c	./ft_strchr.c	./ft_strncat.c	./ft_tolower.c \
./ft_isalnum.c	./ft_isprint.c	./ft_strcmp.c	./ft_strncmp.c	./ft_toupper.c \
./ft_isalpha.c	./ft_putchar.c	./ft_strcpy.c	./ft_strncpy.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)


clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
