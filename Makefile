CC = cc

CFLAGS = -Wall -Wextra -Werror

DEBUG = gdb --tui

NAME = libft.a

SRCS = $(wildcard srcs/*.c)

OBJS = $(patsubst srcs/%.c,srcs/%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $@ $^

srcs/%.o: srcs/%.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf libft.a

fclean: clean
	rm -rf $(OBJS)

re: fclean all
