NAME = Abstract

FILES = main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SRC = $(addprefix src/, $(FILES))

OBJ = $(SRC:.cpp=.o)

INCLUDES = ./includes

CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I $(INCLUDES) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
