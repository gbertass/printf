# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:04:25 by gbertass          #+#    #+#              #
#    Updated: 2023/06/10 16:59:36 by gbertass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRC = ft_putchar.c ft_putnbr.c ft_strchr.c

OBJS = ${SRC:.c=.o}

INCLUDE = -I .

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o} 

$(NAME): ${OBJS}
		make -C libft
		cp libft/libft.a ${NAME}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		make clean -C libft
		${RM} ${OBJS} ${BONUS_OBJ}

fclean: clean
		make fclean -C libft
		${RM} ${NAME} 

tclean: clean
		${RM} teste

re: fclean all

teste:	${NAME}
		${CC} ${CFLAGS} ${INCLUDE} main_part1.c ${NAME} -o teste

.PHONY: all clean fclean re