NAME = Grace
SRCS = Grace.c
CFLAGS = -Wall -Wextra -Werror
RM = /bin/rm -rf
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME)
all: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re