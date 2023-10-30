SRCS		= main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= Inheretence

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