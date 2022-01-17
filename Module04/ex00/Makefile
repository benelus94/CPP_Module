CC = CLANG++
CFLAGS = -Wall -Wextra -Werror -std=c++98
LFLAGS = -L.
INCS = -I includes

NAME = tests

OBJS_DIR = objs/

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.cpp=.o))

all : $(NAME) 

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(INCS) $(OBJS) -o $(NAME)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o : %.cpp
	$(CC) $(CFLAGS) -c $(INCS) $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean
	make all

.PHONY : all bonus clean fclean re
