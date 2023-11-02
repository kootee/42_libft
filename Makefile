NAME = libft.a

CC = cc

SRCS = ft_memset.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_substr.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS}
	ar -rc ${NAME} ${OBJS}
	@nm ${NAME}
	cc main.c -L. -lft -o main

clean:
	@echo "cleaning..."
	@rm -f ${OBJS}

.PHONY: clean

fclean: clean
	@echo "cleaning all files..."
	@rm -f ${NAME}
	@rm -f main.o main

re: fclean all