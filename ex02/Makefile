CC = c++

SOURCES = main.cpp

OBJECTS = $(SOURCES:%.cpp=%.o)

NAME = convertor

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all	: $(NAME)

$(NAME)	: $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

%.o	: %.c
	$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJECTS)

fclean	: clean
	rm -f $(NAME)

re	:  fclean all