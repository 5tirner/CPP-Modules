SRC			= phonebook.cpp\
			main.cpp\
			add.cpp\
			search.cpp\

OBJ			= $(SRC:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= MyAwesomePhoneBook

all : $(NAME)

$(NAME):$(OBJ)

	$(CXX) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all