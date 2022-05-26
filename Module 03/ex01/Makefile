SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp 

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/ClapTrap.hpp -I/ScavTrap.hpp

NAME	=	scavtrap
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : ClapTrap.hpp ScavTrap.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re
