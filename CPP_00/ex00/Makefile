# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 09:02:24 by correia           #+#    #+#              #
#    Updated: 2024/03/12 11:25:20 by pveiga-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CXX		=	c++

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

all	:		$(NAME)

$(NAME) :	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

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