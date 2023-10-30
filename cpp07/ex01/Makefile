SRCS		= main.cpp\

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -rf

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= Iter

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(#CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all