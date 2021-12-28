# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2021/12/28 16:08:14 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = src/ClapTrap.cpp\
src/ScavTrap.cpp\
src/FragTrap.cpp\
src/main.cpp

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

