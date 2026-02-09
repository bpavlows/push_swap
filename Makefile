# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpavlows <bpavlows@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 10:54:57 by bpavlows          #+#    #+#              #
#    Updated: 2026/01/22 11:03:54 by bpavlows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= push_swap

CC			= cc

CCFLAGS		= -Wall -Wextra -Werror

LIBFT_PATH	= ./Libft/

LIBFT		= $(LIBFT_PATH)/libft.a

SRC			= push_swap.c \
			  check_errors.c \
			  utils.c \
			  init_stack.c \
			  init_a_to_b.c \
			  init_b.c \
			  sort_stacks.c \
			  swap.c \
			  rotate.c \
			  reverse_rotate.c \
			  push.c \
			  move.c

OBJ			= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CCFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
