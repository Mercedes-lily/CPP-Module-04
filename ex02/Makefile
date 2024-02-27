NAME = Animal

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

OBJ_DIR = obj/

SRCS =	Cat.cpp \
		Dog.cpp \
		AAnimal.cpp \
		WrongCat.cpp \
		WrongDog.cpp \
		WrongAnimal.cpp \
		main.cpp \
		Brain.cpp

VPATH = $(OBJ_DIR)

OBJS = $(SRCS:%.cpp=%.o)
OBJ_PRE = $(addprefix $(OBJ_DIR), $(OBJS))

DEP = Cat.hpp \
		Dog.hpp \
		AAnimal.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp \
		WrongDog.hpp \
		Brain.hpp

all: $(NAME)

$(OBJ_DIR)%.o: %.cpp $(DEP_PRE)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ_PRE)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re debug fclean clean all