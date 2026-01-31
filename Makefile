NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
DIR = src
BDIR = src/bonus
OBJDIR = obj
BOBJDIR = obj/bonus

MAIN = main
MAIN_SRC = main.c
MAIN_OBJ = main.o

HEADERS = -I .

SRCS = $(DIR)/ft_memset.c \
       $(DIR)/ft_bzero.c \
       $(DIR)/ft_calloc.c \
       $(DIR)/ft_memcpy.c \
       $(DIR)/ft_memmove.c \
       $(DIR)/ft_memchr.c \
       $(DIR)/ft_memcmp.c \
       $(DIR)/ft_strlen.c \
       $(DIR)/ft_strdup.c \
       $(DIR)/ft_strlcat.c \
       $(DIR)/ft_strlcpy.c \
       $(DIR)/ft_strchr.c \
       $(DIR)/ft_strrchr.c \
       $(DIR)/ft_strnstr.c \
       $(DIR)/ft_strncmp.c \
       $(DIR)/ft_atoi.c \
       $(DIR)/ft_isalpha.c \
       $(DIR)/ft_isdigit.c \
       $(DIR)/ft_isalnum.c \
       $(DIR)/ft_isascii.c \
       $(DIR)/ft_isprint.c \
       $(DIR)/ft_toupper.c \
       $(DIR)/ft_tolower.c \
       $(DIR)/ft_substr.c \
       $(DIR)/ft_strjoin.c \
       $(DIR)/ft_strtrim.c \
       $(DIR)/ft_split.c \
       $(DIR)/ft_itoa.c \
       $(DIR)/ft_strmapi.c \
       $(DIR)/ft_striteri.c \
       $(DIR)/ft_putchar_fd.c \
       $(DIR)/ft_putstr_fd.c \
       $(DIR)/ft_putendl_fd.c \
       $(DIR)/ft_putnbr_fd.c

BSRCS = $(BDIR)/ft_lstnew_bonus.c \
        $(BDIR)/ft_lstadd_front_bonus.c \
        $(BDIR)/ft_lstsize_bonus.c \
        $(BDIR)/ft_lstlast_bonus.c \
        $(BDIR)/ft_lstadd_back_bonus.c \
        $(BDIR)/ft_lstdelone_bonus.c \
        $(BDIR)/ft_lstclear_bonus.c \
        $(BDIR)/ft_lstiter_bonus.c \
        $(BDIR)/ft_lstmap_bonus.c

OBJS = $(patsubst $(DIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
BOBJS = $(patsubst $(BDIR)/%.c,$(BOBJDIR)/%.o,$(BSRCS))

# Default target
all: $(NAME)

# Create object directories
$(OBJDIR):
	mkdir -p $(OBJDIR)

$(BOBJDIR):
	mkdir -p $(BOBJDIR)

# Compile objects
$(OBJDIR)/%.o: $(DIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(BOBJDIR)/%.o: $(BDIR)/%.c | $(BOBJDIR)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

# Create static library
$(NAME): $(OBJS)
	ar -rc $@ $^

# Main
$(MAIN): $(MAIN_OBJ) $(NAME) bonus
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(NAME) -o $(MAIN)

$(MAIN_OBJ): $(MAIN_SRC)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

bonus: $(OBJS) $(BOBJS)
	ar -rc $(NAME) $^
	@touch .bonus

clean:
	rm -rf $(OBJDIR) $(BOBJDIR) $(MAIN_OBJ)

fclean: clean
	rm -f $(NAME) $(MAIN) .bonus

re: fclean all
rebonus: fclean bonus
remain: fclean main

.PHONY: all bonus clean fclean re rebonus main
