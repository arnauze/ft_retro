OBJECTS = *.o
SRC = src/*.cpp
FLAGS = -Wall -Wextra -Werror -lncurses
NAME = ft_retro

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME) 

lldb:
	clang++ $(FLAGS) $(SRC) -o $(NAME) -g

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
