SRCS		= main.cpp\
			Serialization.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= Serialization

RM			= rm -rf

CXX			= c++

#CXXFLAGS	= -fsanitize=address -g3

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all