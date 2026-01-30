NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror
DIR = src
BDIR = src/bonus

HEADERS	= -I . ../libft.h

SRCS = ${DIR}/ft_memset.c \
		${DIR}/ft_bzero.c \
		${DIR}/ft_calloc.c \
		${DIR}/ft_memcpy.c \
		${DIR}/ft_memmove.c \
		${DIR}/ft_memchr.c \
		${DIR}/ft_memcmp.c \
		${DIR}/ft_strlen.c \
		${DIR}/ft_strdup.c \
		${DIR}/ft_strlcat.c \
		${DIR}/ft_strlcpy.c \
		${DIR}/ft_strchr.c \
		${DIR}/ft_strrchr.c \
		${DIR}/ft_strnstr.c \
		${DIR}/ft_strncmp.c \
		${DIR}/ft_atoi.c \
		${DIR}/ft_isalpha.c \
		${DIR}/ft_isdigit.c \
		${DIR}/ft_isalnum.c \
		${DIR}/ft_isascii.c \
		${DIR}/ft_isprint.c \
		${DIR}/ft_toupper.c \
		${DIR}/ft_tolower.c \
		${DIR}/ft_substr.c \
		${DIR}/ft_strjoin.c \
		${DIR}/ft_strtrim.c \
		${DIR}/ft_split.c	\
		${DIR}/ft_itoa.c \
		${DIR}/ft_strmapi.c \
		${DIR}/ft_striteri.c \
		${DIR}/ft_putchar_fd.c \
		${DIR}/ft_putstr_fd.c \
		${DIR}/ft_putendl_fd.c \
		${DIR}/ft_putnbr_fd.c

BSRCS = ${BDIR}/ft_lstnew_bonus.c \
		${BDIR}/ft_lstadd_front_bonus.c \
		${BDIR}/ft_lstsize_bonus.c \
		${BDIR}/ft_lstlast_bonus.c \
		${BDIR}/ft_lstadd_back_bonus.c \
		${BDIR}/ft_lstdelone_bonus.c \
		${BDIR}/ft_lstclear_bonus.c \
		${BDIR}/ft_lstiter_bonus.c \
		${BDIR}/ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

BOBJS = ${BSRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${HEADERS} -c ${SRCS}
	ar -rc $@ $^

bonus: .bonus

.bonus: ${OBJS} ${BOBJS}
	ar -rc ${NAME} $^
	@touch .bonus

clean:
	@echo "cleaning..."
	@rm -f ${OBJS} ${BOBJS}

fclean: clean
	@rm -f ${NAME} .bonus

re: fclean all

rebonus: fclean bonus

.PHONY: clean bonus all