SRCS		= main.cpp\
			Base.cpp\
			generate.cpp\
			identify1.cpp\
			identify2.cpp\

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -rf

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3

NAME		= IdentifyRealType

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all