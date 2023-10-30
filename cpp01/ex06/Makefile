SRC				= main.cpp\
				Harl.cpp\

OBJS			= $(SRC:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= harlFilter

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all