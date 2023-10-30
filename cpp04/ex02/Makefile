SRCS		= main.cpp\
			Dog.cpp\
			Cat.cpp\
			Animal.cpp\
			Brain.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= AbstructClass

RM			= rm -rf

CXX			= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all