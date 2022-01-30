# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2022/01/28 16:23:37 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = bash

NAME = converter

SRC = src/Converter.cpp\
src/main.cpp

OBJ = obj/Converter.o\
obj/main.o

OBJDIR = obj/

CXX = clang++
CXXFLAGES = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@echo -n "Assembling [$@]... "
	@$(CXX) $(CXXFLAGES) -o $@ $(OBJ)

	@echo "✔"

$(OBJ) : $(SRC) $(OBJDIR)
	@echo -n "Compiling... "
	@$(CXX) $(CXXFLAGES) -c $(SRC)
	@mv *.o $(OBJDIR)
	@echo "✔"

$(OBJDIR) :
	@mkdir $@

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

