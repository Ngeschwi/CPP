SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/Bureaucrat.hpp -I/Form.hpp
NAME	=	Bureaucrat
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : Bureaucrat.hpp Form.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re