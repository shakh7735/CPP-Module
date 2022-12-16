NAME		= convert
SSRCSDIR	= ./
OBJSDIR		= objs
INCLUDES	= ./


SRCS		= $(wildcard $(SRCSDIR)*.cpp)
OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

#Colors
DEF_COLOR	= \033[0;39m
GRAY		= \033[0;90m
RED			= \033[0;91m
GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN		= \033[0;96m
WHITE		= \033[0;97m

#Arguments for run
ifeq (run,$(firstword $(MAKECMDGOALS)))
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $(RUN_ARGS):;@:)
endif

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $@$(DEF_COLOR)"
	@$(CXX) $(CXXFLAGS) $^ -o $@

run:		all
			@echo "$(GREEN)runing prog $(NAME).$(DEF_COLOR)"
			./$(NAME) $(RUN_ARGS)

clean:
	@rm -rf $(OBJS)
	@echo "$(RED)Object cleaned.$(DEF_COLOR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Name cleaned.$(DEF_COLOR)"

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test run