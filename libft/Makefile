PATH_SRC = ./fct_basic/

PATH_BONUS = ./fct_bonus/

PATH_OTHER = ./fct_other/

SRCS = ${wildcard ${PATH_SRC}*.c}

SRCS_BONUS = ${wildcard ${PATH_BONUS}*.c}

SRCS_OTHER = ${wildcard ${PATH_OTHER}*.c}

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

OBJS_OTHER =  ${SRCS_OTHER:.c=.o}

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c -I.

INCLUDE = ./

INCLUDE_BONUS = ../

.c.o :
	${CC} ${CFLAGS} $< -o ${<:.c=.o}

${NAME}:  ${OBJS}
	ar rc -o ${NAME} ${OBJS}

all:	${NAME} 

clean:
	rm -f ${OBJS} ${OBJS_BONUS}

fclean: clean
	rm -f  ${NAME}

re:  fclean all;

bonus: ${OBJS_BONUS} ${OBJS}
	ar rc -o ${NAME} ${OBJS} ${OBJS_BONUS}

other: ${OBJS_BONUS} ${OBJS} ${OBJS_OTHER} 
	ar rc -o ${NAME} ${OBJS} ${OBJS_BONUS} ${OBJS_OTHER} 
