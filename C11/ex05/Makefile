NAME = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = do-op.c \
	ft_atoi.c \
	ft_putnbr.c \
	main.c
	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
