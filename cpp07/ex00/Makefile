SRCS		= main.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

RM			= rm -rf

NAME		= Start

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(#CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all