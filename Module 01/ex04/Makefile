SRCS	=	main.cpp 

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/replace.hpp

NAME	=	replace
CC		=	clang++
CFLAGS	=	#-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : replace.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
