SRCS	=	main.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/inter.hpp
NAME	=	inter
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : inter.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re