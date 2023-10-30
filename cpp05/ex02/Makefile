SRCS		= main.cpp\
			Bureaucrat.cpp\
			AForm.cpp\
			ShrubberyCreationForm.cpp\
			RobotomyRequestForm.cpp\
			PresidentialPardonForm.cpp\

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++

#CXXFLAGS	= -fsanitize=address

NAME		= BurecrateExecute

RM			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(CXX) $(#CXXFLAGS) $(OBJS) -o $(NAME)

clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(NAME) *_shrubbery

re : fclean all