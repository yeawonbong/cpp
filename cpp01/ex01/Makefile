# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2021/12/17 19:17:40 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

SRC = ./src/ZombieHorde.cpp\
./src/Zombie.cpp\
./src/main.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
CFLAGES = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGES) -o $@ $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGES) -c $(SRC)
	@mv *.o src

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJ)

re : fclean all

