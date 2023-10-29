SRCS		= main.cpp\

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -rf

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

NAME		= Span

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all