# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: correia <correia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 09:02:24 by correia           #+#    #+#              #
#    Updated: 2024/03/02 09:59:19 by correia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CPP		=	c++

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

CPPFLAGS=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

all	:		$(NAME)

$(NAME) :	$(OBJS)
			@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
			@$(CPP) $(CPPFLAGS) -c -o $@ $<

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