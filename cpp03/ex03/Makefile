.PHONY: all clean fclean re

CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98 -Wno-shadow #-Wshadow 

SRCS:=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS:=$(SRCS:%.cpp=%.o)
NAME=claptrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

valgrind:

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all