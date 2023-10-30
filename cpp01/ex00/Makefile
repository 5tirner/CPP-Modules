SRC			= Zombie.cpp\
			newZombie.cpp\
			randomChump.cpp\
			main.cpp\

OBJ			= $(SRC:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= BraiiiiiiinnnzzzZ

all : $(NAME)

$(NAME):$(OBJ)

	$(CXX) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all