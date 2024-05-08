/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:45 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 19:39:44 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	std::cout << std::endl << "-----test------" << std::endl << std::endl;
	
	{	
		try
		{
			Bureaucrat bureaucrat("Ruben", 15);
			std::cout << bureaucrat << std::endl;
			Bureaucrat bureaucrat2("Ana", 5);
			std::cout << bureaucrat2 << std::endl;
			
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
			std::cout << bureaucrat << std::endl;
			bureaucrat.decrementGrade(1);
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
			std::cout << bureaucrat << std::endl;
			bureaucrat.incrementGrade(1);
		}
		catch(const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----test3------" << std::endl << std::endl;

	{
		try
		{
			Bureaucrat bureaucrat("Maria", 200);
			std::cout << bureaucrat << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	
	std::cout << std::endl << "-----test4------" << std::endl << std::endl;

	{
		try
		{
			Bureaucrat bureaucrat("Joana", -1);
			std::cout << bureaucrat << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	
	}

	std::cout << std::endl << "-----test5------" << std::endl << std::endl;
	
	{	
		try
		{
			Bureaucrat bureaucrat("Carlos", 15);
			std::cout << bureaucrat << std::endl;
			bureaucrat.decrementGrade(1000);
		}
		catch(const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
	
}
