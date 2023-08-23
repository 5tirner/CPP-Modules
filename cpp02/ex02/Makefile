SRCS		= Fixed.cpp\
			main.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= NowWeAreTalking

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all
