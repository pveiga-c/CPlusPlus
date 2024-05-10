/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:35 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/10 17:41:06 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"

#define tree " \n\
               ,@@@@@@@, \n\
       ,,,.   ,@@@@@@/@@,  .oo8888o. \n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o \n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' \n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' \n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' \n\
   `&%\\ ` /%&'    |.|        \\ '|8' \n\
       |o|        | |         | | \n\
       |.|        | |         | | \n\
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ \n\
"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

		std::string getTarget() const;
		void execute() const;

};


#endif