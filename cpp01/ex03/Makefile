# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2021/12/20 15:12:56 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

SRC = src/main.cpp\
src/Weapon.cpp\
src/HumanA.cpp\
src/HumanB.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGES = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGES) -o $@ $(OBJ)

$(OBJ) : $(SRC)
	$(CXX) $(CXXFLAGES) -c $(SRC)
	@mv *.o src

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJ)

re : fclean all

