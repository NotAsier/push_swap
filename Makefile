# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:38:01 by aarranz-          #+#    #+#              #
#    Updated: 2024/03/11 02:58:13 by aarranz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
LIBFT = libs/libft

# ************************* Header Files and Libs PART **************************

INC = -Iincludes
LIBS = $(addprefix $(LIBFT), /libft.a)

# ************************* FIlES PART **************************

SRC_DIR = src/
SRC_FILES = main.c

SORTING_DIR= $(SRC_DIR)sorting/
SORTING_FILES = sort_five.c sort_four.c sort_others.c sort_three.c sort_utils.c
SORTING_FILES += push_instructions.c rotate_instructions.c reverse_rotate_instructions.c swap_instructions.c 

UTILS_DIR = $(SRC_DIR)utils/
UTILS_FILES = helper_funcs.c init_stack.c errors.c ft_free.c ft_tweaks.c lst_utils.c

CFILES = $(addprefix $(SRC_DIR), $(SRC_FILES))
CFILES += $(addprefix $(UTILS_DIR), $(UTILS_FILES))
CFILES += $(addprefix $(SORTING_DIR), $(SORTING_FILES))

# *************************  PATTERN SUBSTITUTION PART **************************

OBJ = $(CFILES:%.c=%.o)

# *************************  RULES PART **************************

all: libft $(NAME)

libft:
	@echo "Making Libft"
	@cd $(LIBFT) && make

# *************************  LINKING PART **************************

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBS) -o $(NAME)

# *************************  COMPILING PART **************************

%.o : %.c 
	$(CC) $(CFLAGS) -c $(INC) $< -o $@

# *************************  CLEANING PART **************************

clean:
	@cd $(LIBFT) && make clean
	rm -rf $(OBJ)
	rm -rf $(LIBS)

fclean: clean
	rm -rf $(NAME)


re: fclean all

.PHONY: all gnl libft clean fclean