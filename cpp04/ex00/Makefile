# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:21:43 by ybong             #+#    #+#              #
#    Updated: 2021/12/29 22:05:03 by ybong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = src/Animal.cpp\
src/Cat.cpp\
src/Dog.cpp\
src/main.cpp

OBJ = $(SRC:.cpp=.o)
OBJDIR = obj/

CXX = clang++
CXXFLAGES = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "Assembling $@: "
	@$(CXX) $(CXXFLAGES) -o $@ $(OBJ)
	@echo "✔"

$(OBJ) : $(SRC) $(OBJDIR)
	@echo "Compiling $^: "
	@$(CXX) $(CXXFLAGES) -c $(SRC)
	@mv *.o $(OBJDIR)
	@echo "✔"


$(OBJDIR) :
	@mkdir $@

fclean : clean
	@echo "Cleaning all..: "
	@rm -f $(NAME)
	@echo "✔"

clean :
	@echo "Cleaning obj files..: "
	@rm -rf $(OBJDIR)

re : fclean all

