# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 17:28:00 by vflorez           #+#    #+#              #
#    Updated: 2023/11/23 16:43:01 by vflorez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Colors

RED 	= \033[0;91m
GREEN	= \033[1;92m
YELLOW	= \033[1;93m
BLUE	= \033[0;96m
ORANGE	= \033[0;33m
GRAY	= \033[0;90m

#Main
NAME_PROJECT = push_swap

#Sources
SRC_DIR = src
SRC_FILES = push_swap.c\
			push_swap.utils.c\
			


LIBFT = $(SRC_DIR)/libft
PRINTF = $(SRC_DIR)/Printf

#Compiler
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address
LINKFLAGS = -L./$(LIBFT) -lft -L./$(PRINTF) -lftprintf

#Objects
OBJ_DIR = $(SRC_FILES:.c=.o)

#Rules
all: $(NAME_PROJECT)

$(NAME_PROJECT) : $(OBJ)
	@$(MAKE) -C $(LIBFT)
	@$(MAKE) -C $(PRINTF)
	@$(CC) $(CFLAGS) $(LINKFLAGS) -o $(NAME_PROJECT)
	@echo "$(BLUE) $(NAME_PROJECT) --> Created & compiled 👀$(END)"


$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I./includes -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT)
	@$(MAKE) clean -C $(PRINTF)
	@echo "$(GREEN) All .o files deleted 💀💀 $(END)"

fclean: clean
	@$(MAKE) fclean -C $(LIBFT)
	@$(MAKE) fclean -C $(PRINTF)
	@rm -f $(NAME_PROJECT)
	@echo "$(BLUE) $(NAME_PROJECT) deleted 💀💀 $(END)"

re: fclean all

.PHONY: all clean fclean re