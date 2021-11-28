NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
CFLAGES = -g -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGES) -o $@ $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGES) -c $(SRC)

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJ)

re : fclean all


	
