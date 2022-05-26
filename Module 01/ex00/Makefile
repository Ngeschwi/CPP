SRCS	=	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp 

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/Zombie.hpp

NAME	=	zombie
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : Zombie.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)