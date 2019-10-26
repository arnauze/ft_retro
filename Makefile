OBJECTS = *.o
SRC = src/ft_retro.cpp\
		src/Frame.cpp\

FLAGS = -Wall -Wextra -Werror -lncurses
NAME = ft_retro

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
