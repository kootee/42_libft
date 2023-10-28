NAME = libft
CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = libft.h
SRCS = $(wildcard *.c)

all: ${NAME}

${NAME}: ${SRCS}

%.o: %.c ${SRCS}
	${CC} -c -o $@ $< ${CFLAGS}

clean:
	rm -f all

.PHONY clean
re: clean
	rm -f ${NAME}


