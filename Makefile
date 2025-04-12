CC = cc

CFLAGS = -Wall -Wextra -Werror

DEBUG = gdb --tui

NAME = libft.a

SRCS = $(wildcard *.c)

OBJS = $(patsubst %.c,%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $@ $^

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf libft.a

re: fclean all
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
