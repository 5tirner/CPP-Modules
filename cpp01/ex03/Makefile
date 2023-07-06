SRC			= main.cpp\
			Weapon.cpp\
			HumanA.cpp\
			HumanB.cpp\
			

OBJS			= $(SRC:.cpp=.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME		= UnnecessaryViolence

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all