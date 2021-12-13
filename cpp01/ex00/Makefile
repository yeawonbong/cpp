# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2021/12/10 16:23:45 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

SRC = Zombie.cpp\
newZombie.cpp\
randomChump.cpp\
main.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
CFLAGES = -Wall -Wextra -Werror

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

