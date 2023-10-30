SRCS		= Fixed.cpp\
			main.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= NowWeAreTalking

CXX			= c++

#CXXFLAGS	= -fsanitize=address

CPPFLAGS	= -fsanitize=address -g3

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all
