CC = cc

CFLAGS = -Wall -Wextra -Werror

DEBUG = gdb --tui

NAME = libft.a

SRCS = $(wildcard *.c)

OBJS = $(patsubst %.c,%.o,$(SRCS))

BONUS_SRCS = ft_lstnew_bonus.c

BONUS_OBJS = ft_lstnew_bonus.o

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $@ $^

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf libft.a

re: fclean all

bonus: $(BONUS_OBJS)
	$(CC) $(CFLAGS) -c $(BONUS_SRCS) -o $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
