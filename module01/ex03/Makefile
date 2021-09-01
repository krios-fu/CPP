SRCS= 			main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CXXFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= violence

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re test