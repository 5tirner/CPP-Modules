SRCS		= main.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra	-Werror -fsanitize=address -g3

NAME		= Array

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all