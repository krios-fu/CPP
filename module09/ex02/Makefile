NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re