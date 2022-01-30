# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2022/01/30 15:20:00 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = bash

NAME = identify

SRC = src/Base.cpp\
src/A.cpp\
src/B.cpp\
src/C.cpp\
src/main.cpp

OBJ = obj/Base.o\
obj/A.o\
obj/B.o\
obj/C.o\
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
