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
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c	\
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		main.c

BSRCS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

BONUS = ${BSRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS}
	ar -rc ${NAME} ${OBJS}
	cc main.c -L. -lft -o main

bonus: ${NAME} ${BONUS}
		ar -rcs ${NAME} ${BONUS}

clean:
	@echo "cleaning..."
	@rm -f ${OBJS} ${BONUS}


fclean: clean
	@echo "cleaning all files..."
	@rm -f ${NAME}
	@rm -f main.o main

re: fclean all

rebonus: fclean bonus

.PHONY: clean