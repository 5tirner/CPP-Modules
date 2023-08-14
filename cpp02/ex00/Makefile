SRCS		= main.cpp\
			Fixed.cpp\

OBJS		= $(SRCS:.cpp=.o)

NAME		= OrthodoxCanonicalForm

RM			= rm -rf

CXX			= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
