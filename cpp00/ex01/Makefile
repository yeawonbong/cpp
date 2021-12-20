# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 17:09:28 by ybong             #+#    #+#              #
#    Updated: 2021/12/20 15:12:56 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

SRC = ./src/phoneBook.cpp\
./src/contact.cpp\
./src/main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGES = -g -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGES) -o $@ $(OBJ)

$(OBJ) : $(SRC)
	$(CXX) $(CXXFLAGES) -c $(SRC)
	@mv *.o ./src

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJ)

re : fclean all

