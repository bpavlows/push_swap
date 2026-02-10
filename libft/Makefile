# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpavlows <bpavlows@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 11:36:59 by bpavlows          #+#    #+#              #
#    Updated: 2025/10/24 08:48:33 by bpavlows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c ft_printf.c ft_print_hex.c ft_print_sp.c \
	ft_putstr_fd.c ft_split.c

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f 

all: ${NAME}

%.o: %.c libft.h 
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
