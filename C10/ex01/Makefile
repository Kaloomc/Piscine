NAME = ft_cat

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_cat.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
