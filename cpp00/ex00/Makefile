# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 17:09:35 by ybong             #+#    #+#              #
#    Updated: 2021/12/20 15:12:56 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGES = -g -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGES) -o $@ $(OBJ)

$(OBJ) : $(SRC)
	$(CXX) $(CXXFLAGES) -c $(SRC)

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJ)

re : fclean all


	
