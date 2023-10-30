SRCS		= main.cpp\
			ScalarConverter.cpp\
			dealers.cpp\
			checkSyntax.cpp\
			removeSpaces.cpp\
			getTwoParts.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

RM			= rm -rf

NAME		= convert

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(#CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all