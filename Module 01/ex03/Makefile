SRCS	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/Weapon.hpp -I/HumanA.hpp -I/HumanB.hpp

NAME	=	weapon
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS) : Weapon.hpp HumanA.hpp HumanB.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re
