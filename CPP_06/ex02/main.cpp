/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:38:57 by correia           #+#    #+#             */
/*   Updated: 2024/05/16 16:42:37 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <time.h>
#include <cstdlib>


Base* generate(void)
{
	int random_value = std::rand() % 3;
	if (random_value == 0)
	{
		std::cout << "Generated: A" << std::endl;
		return (new A());
	}
	else if (random_value == 1)
	{
		std::cout << "Generated: B" << std::endl;
		return (new B());
	}
	else if (random_value == 2)
	{
		std::cout << "Generated: C" << std::endl;
		return (new C());
	}
	else
	{
		std::cout << "Unknown" << std::endl;
		return (NULL);
	}
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer A" << std::endl;
	else if ((dynamic_cast<B*>(p)))
		std::cout << "Pointer B" << std::endl;
	else if ((dynamic_cast<C*>(p)))
		std::cout << "Pointer C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p) 
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference A" << std::endl;
	}
	catch (const std::exception &e_A)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Reference B" << std::endl;
		}
		catch(const std::exception& e_B)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "Reference C" << std::endl;
			}
			catch(const std::exception& e_C)
			{
				std::cout << "Unknown" << std::endl;
			}
			
		}
		
	}
}

int main(void)
{
	srand(time(0));
	std::cout << std::endl;
	for(int i = 0; i < 3; i++)
	{
		Base *base = generate();
		
		identify(base);
		identify(*base);
		
		delete base;
		std::cout << std::endl;
	}
}