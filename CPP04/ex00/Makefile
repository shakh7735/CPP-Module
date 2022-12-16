NAME		= animal
SRCSDIR		= ./
OBJSDIR		= objs
INCLUDES	= ./

SRCS		=   $(wildcard $(SRCSDIR)*.cpp)

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

all: $(NAME)

$(NAME): $(SRCS)
	@echo "Compiling $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: re
	./$(NAME)

.PHONY: all clean fclean re test
