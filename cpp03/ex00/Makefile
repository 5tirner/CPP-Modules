SRCS		= main.cpp\
			ClapTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

NAME		= AndOpen

CXX			= c++

#CXXFLAGS	= -fsanitize=address

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(#CXXFLAGS) $(OBJS) -o $(NAME)

clean:

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all