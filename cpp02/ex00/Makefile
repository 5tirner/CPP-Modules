SRCS		= main.cpp\
			Fixed.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= OrthodoxCanonicalForm

RM			= rm -rf

CXX			= c++

#CXXFLAGS	= -fsanitize=address

CPPFLAGS	= -fsanitize=address -g3

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
