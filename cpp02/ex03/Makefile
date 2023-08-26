SRCS		= main.cpp\
			Fixed.cpp\
			Point.cpp\
			bsp.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX 		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

CPPFLAGS	= -fsanitize=address -g3

RM			= rm -rf

NAME		= BSP

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all