/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:36:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/15 17:04:03 by pveiga-c         ###   ########.fr       */
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
		ShrubberyCreationForm treeForm("tree");
		RobotomyRequestForm robotForm("robot");
		PresidentialPardonForm presidentialForm("pardon");
		Bureaucrat vip("President", 3);
		std::cout << treeForm;
		std::cout << robotForm;
		std::cout << presidentialForm;
		vip.signForm(presidentialForm);
		vip.signForm(treeForm);
		vip.executeForm(presidentialForm);
		vip.executeForm(treeForm);
		vip.executeForm(robotForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
}