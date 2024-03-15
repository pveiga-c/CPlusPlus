# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 09:02:24 by correia           #+#    #+#              #
#    Updated: 2024/03/15 20:05:04 by pveiga-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CXX		=	c++

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

COLOUR_GREEN=\033[1;32m
COLOUR_END=\033[0m

all	:		$(NAME)

$(NAME) :	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@echo "$(COLOUR_GREEN) >> $(NAME) is ready to use $(COLOUR_END)"

%.o: %.cpp
			@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:			
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean $(NAME)

v1:
			clear && make re && valgrind ./$(NAME)

v2:
			clear && make re && valgrind ./$(NAME) "shhhhh... I think the students are asleep..."

v3:
			clear && make re && valgrind ./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."