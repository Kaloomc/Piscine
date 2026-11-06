NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCLUDES = includes

SRCS = $(SRCS_DIR)/ft_putchar.c \
		$(SRCS_DIR)/ft_swap.c \
		$(SRCS_DIR)/ft_putstr.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)/ft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
