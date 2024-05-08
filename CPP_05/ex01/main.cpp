/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:45 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 20:28:34 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	std::cout << std::endl << "-----test------" << std::endl << std::endl;
	
	{	
		try
		{
			Bureaucrat bureaucrat("Ruben", 3);
			Form form("form", 151, 15);
			std::cout << bureaucrat;
			std::cout << form;
			bureaucrat.signForm(form);
			form.beSigned(bureaucrat);

		}
		catch(const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl << "-----test1------" << std::endl << std::endl;
	
	{	
		try
		{
			Bureaucrat bureaucrat("Pedro", 150);
			Form form("form", 15, 151);
			std::cout << bureaucrat;
			std::cout << form;
			bureaucrat.signForm(form);
			form.beSigned(bureaucrat);
		}
		catch(const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
		
	std::cout << std::endl << "-----test2------" << std::endl << std::endl;
	
	{	
		try
		{
			Bureaucrat bureaucrat("Joao", 1);
			Form form("form", 10, 20);
			std::cout << bureaucrat;
			std::cout << form;
			form.beSigned(bureaucrat);
			bureaucrat.signForm(form);
		}
		catch(const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----test3------" << std::endl << std::endl;

	{
		try
		{
			Bureaucrat bureaucrat("Maria", 22);
			Form form("form", 10, 30);
			std::cout << bureaucrat;
			std::cout << form;
			form.beSigned(bureaucrat);
			bureaucrat.signForm(form);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	
	return (0);
}

