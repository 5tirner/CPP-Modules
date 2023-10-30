SRC				= main.cpp\
				addChar.cpp\
				openAndCheck.cpp\
				fillNewFile.cpp\

OBJS		= $(SRC:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

NAME		= streamEdior

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all