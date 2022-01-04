# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2021/12/31 17:57:01 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = bash

NAME = a.out

SRC = src/Bureaucrat.cpp\
src/main.cpp

OBJ = $(SRC:.cpp=.o)
OBJDIR = obj/

CXX = clang++
CXXFLAGES = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ) $(OBJDIR)
	@echo -n "Assembling [$@]... "
	@$(CXX) $(CXXFLAGES) -o $@ $(OBJ)
	@mv src/*.o $(OBJDIR)
	@echo "✔"

$(OBJDIR) :
	@mkdir $@

$(OBJ) : $(SRC)
	@echo -n "Compiling... "
	@$(CXX) $(CXXFLAGES) -c $(SRC)
	@mv *.o src
	@echo "✔"

fclean : clean
	@echo -n "Cleaning all... "
	@rm -f $(NAME)
	@echo "✔"

clean :
	@echo -n "Cleaning obj files... "
	@rm -rf $(OBJDIR)
	@rm -f $(OBJ)
	@rm -f *.o
	@echo "✔"

re : fclean all

