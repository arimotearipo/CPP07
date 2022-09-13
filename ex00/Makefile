CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

MAIN = main.cpp

OBJS = main.o

HEADERS = whatever.hpp

NAME = templates

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all