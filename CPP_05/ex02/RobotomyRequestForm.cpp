/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:26 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:46 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
AForm("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm(target, 72, 45)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if(this != &copy)
		this->_target = copy._target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void RobotomyRequestForm::execute() const
{
	std::cout << "Hmmmmmmm Tic! Tic! Tic! Tic! Tic! Tic! Zzzzzzzzz"  << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->getName() << " has robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}
