SRC			= main.cpp\
			Harl.cpp\

OBJS		= $(SRC:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

NAME		= harlFilter

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all