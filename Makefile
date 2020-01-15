NAME	= my_ls

CC	= gcc

RM	= rm -f

SRCS	= ./lib/my_put_nbr.c \
	  ./lib/my_putchar.c \
	  ./lib/my_putstr.c \
	  ./lib/my_strcpy.c \
	  ./lib/my_strligne.c \
	  ./src/main.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./lib/include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
