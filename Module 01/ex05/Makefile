SRCS	=	main.cpp \
			Karen.cpp

OBJS	=	$(SRCS:.cpp=.o)

LINK	=	-I/Karen.hpp

NAME	=	karen
CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(LINK) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(OBJS) : Karen.hpp

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
