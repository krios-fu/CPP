SRCS= 			AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow -g3 -fsanitize=address

NAME			= Materia

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re test