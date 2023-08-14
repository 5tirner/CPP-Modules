SRCS		= main.cpp\
			Fixed.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME		= FixedClassUsed

RM			= rm -rf

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all