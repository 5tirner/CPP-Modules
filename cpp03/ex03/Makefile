SRCS		= main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			DiamondTrap.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= DiamondInheritance

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all