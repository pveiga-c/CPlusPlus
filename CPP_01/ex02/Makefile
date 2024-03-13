# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 09:02:24 by correia           #+#    #+#              #
#    Updated: 2024/03/13 13:48:00 by pveiga-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	HI_THIS_IS_BRAIN

CXX		=	c++

SRCS	=	main.cpp \

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

v:
			clear && make re && valgrind ./$(NAME)
