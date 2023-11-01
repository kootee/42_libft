NAME = libft.a

CC = cc

SRCS = $(wildcard *.c)

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS}
	ar -rc ${NAME} ${OBJS}

clean:
	@echo "cleaning..."
	@rm -f ${OBJS}

.PHONY: clean

fclean: clean
	@echo "cleaning all files..."
	@rm -f ${NAME}

re: fclean all