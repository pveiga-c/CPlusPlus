/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:36:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:50:56 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm shrubForm("shrub");
		RobotomyRequestForm robotForm("robot");
		PresidentialPardonForm pardonForm("pardon");
		Bureaucrat vip("President", 3);
		std::cout << shrubForm;
		std::cout << robotForm;
		std::cout << pardonForm;
		vip.signForm(pardonForm);
		std::cout << pardonForm;
		vip.executeForm(pardonForm);
		vip.executeForm(shrubForm);
		vip.executeForm(robotForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
}