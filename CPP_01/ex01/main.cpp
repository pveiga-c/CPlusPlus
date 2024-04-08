/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 17:25:10 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int numberZombies;
	std::string nameZombies;
		
	std::cout << "Enter the number of zombies: ";
	std::cin >> numberZombies;
	
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
	delete[] newHorde;
}
