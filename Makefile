# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertass <gbertass@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:04:25 by gbertass          #+#    #+#              #
#    Updated: 2023/06/20 16:46:30 by gbertass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRC = ft_printf.c ft_putchars.c ft_puthexa.c ft_putnbr.c ft_putudec.c 

OBJS = ${SRC:.c=.o}

INCLUDE = -I .

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o} 

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${BONUS_OBJ}

fclean: clean
		${RM} ${NAME} 

tclean: clean
		${RM} teste

re: fclean all

teste:	${NAME}
		${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re