/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:36:18 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/15 19:28:47 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern randomIntern1;
	AForm* roboForm;
	roboForm = randomIntern1.makeForm("RobotomyRequestForm", "Bender");
	if(roboForm)
		roboForm->execute();

	std::cout << std::endl;
	
	Intern randomIntern2;
	AForm* treeForm;
	treeForm = randomIntern2.makeForm("ShrubberyCreationForm", "Bender");
	if(treeForm)
		treeForm->execute();
	
	std::cout << std::endl;

	Intern randomIntern3;
	AForm* presidentForm;
	presidentForm = randomIntern3.makeForm("PresidentialPardonForm", "Bender");
	if(presidentForm)
		presidentForm->execute();
}