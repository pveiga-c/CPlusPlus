/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:45 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/02 09:50:03 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	std::cout << std::endl << "-----test1------" << std::endl << std::endl;
	
	{	
		Bureaucrat *bureaucrat = new Bureaucrat("Pedro", 150);
		
		std::cout << *bureaucrat << std::endl;
		try
		{
			bureaucrat->incrementGrade(1);
		}
		catch(const char *e){
			std::cerr << e << std::endl;
		}
		delete bureaucrat;
	}
		
	std::cout << std::endl << "-----test2------" << std::endl << std::endl;
	
	{	
		Bureaucrat *bureaucrat2 = new Bureaucrat("Joao", 1);

		
		std::cout << *bureaucrat2 << std::endl;
		try
		{
			bureaucrat2->decrementGrade(1);
			std::cout << *bureaucrat2 << std::endl;
			
		}
		catch(const char *e)
		{
			std::cerr << e << std::endl;
		}
		delete bureaucrat2;
	}

	std::cout << std::endl << "-----test3------" << std::endl << std::endl;

	{
		try
		{
			Bureaucrat *bureaucrat3 = new Bureaucrat("Maria", 200);
			std::cout << *bureaucrat3 << std::endl;
		}
		catch(const char *e)
		{
			std::cerr << e << std::endl;
		}
		
	}
	
	std::cout << std::endl << "-----test4------" << std::endl << std::endl;

	{
		try
		{
			Bureaucrat *bureaucrat4 = new Bureaucrat("Maria", -1);
			std::cout << *bureaucrat4 << std::endl;
		}
		catch(const char *e)
		{
			std::cerr << e << std::endl;
		}
		
	
	}
	return (0);
	
}