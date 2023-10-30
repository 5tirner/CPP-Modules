SRC			= main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJ			= $(SRC:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

NAME		= MoarBrainz

all : $(NAME)

$(NAME):$(OBJ)

	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all