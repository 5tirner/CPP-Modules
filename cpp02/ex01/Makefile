SRCS		= main.cpp\
			Fixed.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

CPPFLAGS	= -fsanitize=address -g3

NAME		= FixedClassUsed

RM			= rm -rf

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
