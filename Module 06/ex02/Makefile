SRCS	=	main.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/Base.hpp -I/A.hpp -I/B.hpp -I/C.hpp
NAME	=	Base
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : Base.hpp A.hpp B.hpp C.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re