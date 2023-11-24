# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 12:42:50 by vflorez           #+#    #+#              #
#    Updated: 2023/10/31 12:59:22 by vflorez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#Colors

RED 	= \033[0;91m
GREEN	= \033[1;92m
YELLOW	= \033[1;93m
BLUE	= \033[0;96m
ORANGE	= \033[0;33m
GRAY	= \033[0;90m

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_strlen.c\
	ft_pointer.c\
	ft_putnbr.c\
	ft_num_unsig.c\


OBJ = $(SRC:.c=.o)


$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(BLUE) printf --> Created & compiled 👀$(END)"

all: $(NAME)

%.o : %.c
	@gcc $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
