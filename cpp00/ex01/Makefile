SRC			= phonebook.cpp\
			main.cpp\
			add.cpp\
			search.cpp\

OBJ			= $(SRC:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

NAME		= MyAwesomePhoneBook

all : $(NAME)

$(NAME):$(OBJ)

	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all