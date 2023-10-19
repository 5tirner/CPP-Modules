SRCS		= main.cpp\
			Base.cpp\
			generate.cpp\
			identify1.cpp\

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -rf

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME		= IdentifyRealType

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all