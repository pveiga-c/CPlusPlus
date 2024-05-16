/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:32 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/15 19:24:05 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm("ShrubberyCreationForm", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm(target, 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if(this != &copy)
		this->_target = copy._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute() const
{
	std::string fileName;
	
	fileName = _target + "_shrubbery.txt";
	
	std::fstream file(fileName.c_str(), std::ios::out);

	if (file.is_open())
	{
		file << tree << std::endl;
		file.close();
	}
	else
		std::cerr << "Error creating the file." << std::endl;
}

