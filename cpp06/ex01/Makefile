SRCS		= main.cpp\
			Serialization.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= Serialization

RM			= rm -rf

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all