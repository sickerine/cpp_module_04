CC = c++
NAME = sound
FLAGS = -Wall -Werror -Wextra -fsanitize=leak -std=c++98 
FILES = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
FILES_O = $(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(FILES_O)
	$(CC) $(FLAGS) $(FILES_O) -o $(NAME) 

bonus: $(NAME)

all: $(NAME)

clean:
	rm -rf $(FILES_O)
	
fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re