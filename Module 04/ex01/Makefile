SRCS	=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/Animal.hpp -I/Dog.hpp -I/Cat.hpp -I/WrongAnimal.hpp -I/WrongCat.hpp

NAME	=	Animal
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp 
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY:		all clean fclean re