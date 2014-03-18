# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scombat <scombat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/16 18:52:36 by scombat           #+#    #+#              #
#    Updated: 2014/03/18 15:35:44 by scombat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a
DIR=./src/
CC=	gcc
CFLAGS=	-I includes/ -Wall -Werror -Wextra
LDFLAGS=-g

SRC=	ft_atoi.c	ft_bzero.c	ft_isalnum.c	ft_isalpha.c	\
	ft_isascii.c	ft_isdigit.c	ft_isop.c	ft_isprint.c	\
	ft_itoa.c	ft_lstadd.c	ft_lstdel.c	ft_lstdelone.c	\
	ft_lstiter.c	ft_lstmap.c	ft_lstnew.c	ft_memalloc.c	\
	ft_memccpy.c	ft_memchr.c	ft_memcmp.c	ft_memcpy.c	\
	ft_memdel.c	ft_memmove.c	ft_memset.c	ft_putchar.c	\
	ft_putchar_fd.c	ft_putendl.c	ft_putendl_fd.c	ft_putnbr.c	\
	ft_putnbr_fd.c	ft_putstr.c	ft_putstr_fd.c	ft_strcat.c	\
	ft_strchr.c	ft_strclr.c	ft_strcmp.c	ft_strcpy.c	\
	ft_strdel.c	ft_strdup.c	ft_strequ.c	ft_striter.c	\
	ft_striteri.c	ft_strjoin.c	ft_strlcat.c	ft_strlen.c	\
	ft_strmap.c	ft_strmapi.c	ft_strncat.c	ft_strncmp.c	\
	ft_strncpy.c	ft_strnequ.c	ft_strnew.c	ft_strnstr.c	\
	ft_strrchr.c	ft_strrev.c	ft_strsplit.c	ft_strstr.c	\
	ft_strsub.c	ft_strtrim.c	ft_tolower.c	ft_toupper.c

NOM=$(basename $(DIR SRC))
OBJ=$(addsuffix .o, $(NOM))

all: normal

normal: $(NAME)
	@echo "${c_cyan}[${NAME}]\t${c_green}[ok]${c_none}"

verbose: clean all_debug

all_debug: CFLAGS += -DVERBOSE
all_debug: normal

$(NAME): $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

%.o: %.c
	@$(CC) -g $(LFLAGS) -o $@ -c $< $(CFLAGS)

fclean: clean mrproper
	@echo "${c_cyan}[fclean]\t${c_red}directory clean${c_none}"

re: fclean all

clean:
	@rm -rf $(OBJ)

mrproper: clean
	@rm -rf $(NAME)

c_cyan=\033[1;36m
c_green=\033[1;32m
c_red=\033[1;31m
c_none=\033[0;m
.PHONY: all clean fclean re
