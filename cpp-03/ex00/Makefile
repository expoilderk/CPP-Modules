NAME = ClapTrap

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
