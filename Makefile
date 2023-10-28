NAME = libft

CC = cc

SRCS = $(wildcard *.c)

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
	@echo "cleaning"
	rm -f ${OBJS}

.PHONY: clean

fclean: clean
	rm -f ${NAME}

re: fclean all