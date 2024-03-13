/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/13 12:00:54 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>

int main(int argc, char **argv)
{
	int numberZombies;
	std::string nameZombies;
	(void)argv;
	
	std::cout << "Enter the number of zombies: ";
	std::cin >> numberZombies;
	
	if(argc != 1)
		std::cout << "Invalid number Arguments." << std::endl;
		
	while(true)
	{
		if(numberZombies < 0 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Arguments." << std::endl << std::endl;
			std::cout << "Enter the number of zombies: ";
			std::cin >> numberZombies;
		}
		else
			break ;
	}
	std::cout << "Enter the name of Horbe: ";
	std::cin >> nameZombies;
	
	Zombie *newHorde;
	newHorde = zombieHorbe(numberZombies, nameZombies);
	for(int i = 0; i < numberZombies; i++)
	{
		newHorde[i].announce();
	}
	// else
	// {
	// 	std::cout << "Invalid Arguments." << std::endl;
	// }
	
	
	
}