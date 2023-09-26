SRCS		= main.cpp\
			Dog.cpp\
			Cat.cpp\
			Animal.cpp\
			Brain.cpp\
			WrongCat.cpp\
			WrongAnimal.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= AnimalsWithBrains

RM			= rm -rf

CXX			= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all