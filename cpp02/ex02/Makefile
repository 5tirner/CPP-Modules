SRCS		= Fixed.cpp\
			main.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= NowWeAreTalking

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

CPPFLAGS	= -fsanitize=address -g3

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all
