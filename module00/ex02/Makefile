SRCS= 			Account.cpp test.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= clang++
RM				= rm -f
CXXFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= test

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(XXCFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re test