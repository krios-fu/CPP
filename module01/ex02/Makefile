SRCS= 			main.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CXXFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= brain

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re test