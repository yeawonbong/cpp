# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 17:09:28 by ybong             #+#    #+#              #
#    Updated: 2021/12/01 17:09:30 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

SRC = PhoneBook.cpp\
Contact.cpp\
Main.cpp
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

