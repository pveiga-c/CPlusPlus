# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: correia <correia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 13:56:02 by pveiga-c          #+#    #+#              #
#    Updated: 2024/05/09 17:27:42 by correia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Form28B

CXX		=	c++

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp
		
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

r:
			clear && make re && clear && ./$(NAME)
