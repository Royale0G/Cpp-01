SRC = main.cpp Zombie.cpp ZombieHorde.cpp
#OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = ZombieHorde

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

#fclean:
#	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re