SRCS		= main.cpp\
			Bureaucrat.cpp\
			Form.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= BurecrateDoingWork

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(#CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME)

re : fclean all