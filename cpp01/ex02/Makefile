SRC			= main.cpp

OBJ			= $(SRC:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME		= HiThisIsBrain

all : $(NAME)

$(NAME):$(OBJ)

	$(CXX) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all