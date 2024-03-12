/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/12 16:36:02 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>

// int main(int argc, char **argv)
// {
// 	if(argc == 2)
// 	{
// 		int	N;
// 		std::stringstream ss(argv[1]);
// 		ss >> N;
// 		if(ss.fail() || N < 0)
// 		{
// 			std::cout << "Invalid Arguments." << std::endl;
// 			return (1);
// 		}
// 		Zombie *newHorde;
// 		newHorde = zombieHorbe(N, "Soldier");
// 		for(int i; i < N; i++)
// 		{
// 			newHorde[i].announce();
// 		}
// 	}
// 	else
// 		std::cout << "Invalid Arguments." << std::endl;
// }

int main()
{
	int number;
	std::string numberZombies;
	std::string nameZombies;
	
	std::cout << "Enter the number of zombies: ";
	getline(std::cin, numberZombies);
	std::stringstream buf(numberZombies);
	buf >> number;
	while(true)
	{
		if(number < 0 && )
		{
			std::cout << "Invalid Arguments." << std::endl << std::endl;
			std::cout << "Enter the number of zombies: ";
			getline(std::cin, numberZombies);
			std::stringstream buf(numberZombies);
			buf >> number;
		}
		else
			break ;
	}
	std::cout << "Enter the name of Horbe: ";
	getline(std::cin, nameZombies);
	
	
}