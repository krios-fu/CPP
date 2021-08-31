SRCS= 			main.cpp HumanA.cpp Weapon.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= violence

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re test