
NAME		= claptrap
SRCSDIR		= ./
OBJSDIR		= objs
INCLUDES	= .

SRCS		= $(wildcard $(SRCDIR)*.cpp)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compiling $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
