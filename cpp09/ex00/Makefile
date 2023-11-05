SRCS		= main.c\
			BitcoinExchange.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3

RM			= rm -rf

NAME		= BitcoinExchange

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all