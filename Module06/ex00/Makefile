CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LFLAGS = -L.
INCS = -I includes

NAME = tests

OBJS_DIR = objs/

SRCS = main.cpp Converter.cpp utils.cpp
OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.cpp=.o))

all : $(NAME) 

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CXXFLAGS) $(INCS) $(OBJS) -o $(NAME)

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o : %.cpp
	$(CC) $(CXXFLAGS) -c $(INCS) $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean
	make all

.PHONY : all bonus clean fclean re
