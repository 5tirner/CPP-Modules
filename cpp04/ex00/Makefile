SRCS		= main.cpp\
			Dog.cpp\
			Cat.cpp\
			Animal.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= Animals

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