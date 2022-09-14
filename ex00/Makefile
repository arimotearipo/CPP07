CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

MAIN = main.cpp

OBJS = main.o

HEADERS = whatever.hpp

NAME = templates

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS):	$(MAIN) $(HEADERS)
			$(CC) $(FLAGS) $(MAIN) $(HEADERS) -c

clean:		
			rm -rf $(OBJS)
			rm -rf *gch

fclean:		clean
			rm -rf $(NAME)

re:			fclean all