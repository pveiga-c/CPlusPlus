/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/18 18:29:18 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Harl.hpp"

Harl::Harl()
{
	
	levelInput[0]="DEBUG";
	levelInput[1]="INFO";
	levelInput[2]="WARNING";
	levelInput[3]="ERROR";

	functionInput[0] = &Harl::debug;
	functionInput[1] = &Harl::info;
	functionInput[2] = &Harl::warning;
	functionInput[3] = &Harl::error;

	

}
Harl::~Harl()
{
	
}


void	Harl::complain ( std::string level )
{
	f_ptr ptr;
	
	for (int i = 0; i < 4; i++)
	{
		if (levelInput[i] == level)
		{
			ptr = this->functionInput[i];
			(this->*ptr)();
		}
	}
}
	
void	Harl::debug ( void )
{
	std::cout << "--->DEBUG<---" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info ( void )
{
	std::cout << "--->INFO<---" << std::endl;

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning ( void )
{
	std::cout << "--->WARNING<---" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error ( void )
{
	std::cout << "--->ERROR<---" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}