NAME = 

PART1 = 

SRC = ${PART1}
OBJS = ${SRC:.c=.o}
BONUS_OBJ = ${BONUS:.c=.o}

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

teste:
		${CC} ${CFLAGS} ${INCLUDE} main_part1.c ${NAME} -o teste

.PHONY: all clean fclean re