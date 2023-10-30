SRC				= main.cpp\
				addChar.cpp\
				openAndCheck.cpp\
				fillNewFile.cpp\

OBJS			= $(SRC:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= streamEdior

all : $(NAME)

$(NAME):$(OBJS)

	$(CXX) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all