CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

MAIN = main.cpp

OBJS = main.o

HEADERS = iter.hpp

NAME = iter

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all