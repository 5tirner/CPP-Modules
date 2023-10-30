SRC			= main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJ			= $(SRC:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= MoarBrainz

all : $(NAME)

$(NAME):$(OBJ)

	$(CXX) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all