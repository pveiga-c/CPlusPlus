# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 13:56:02 by pveiga-c          #+#    #+#              #
#    Updated: 2024/05/01 13:58:12 by pveiga-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Bureaucrat

CXX		=	c++

SRCS	=	*.cpp \
			
			
			
OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

COLOUR_BLUE =\033[0;34m
COLOUR_RED	=\033[0;31m
COLOUR_END  =\033[0m

all	:		$(NAME)

$(NAME) :	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@echo "$(COLOUR_BLUE) >> $(NAME) is ready to use $(COLOUR_END)"
			

%.o: %.cpp
			@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:			
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(COLOUR_RED) >> $(NAME) clean $(COLOUR_END)"

re:			fclean $(NAME)

v:
			clear && make re && valgrind ./$(NAME)
