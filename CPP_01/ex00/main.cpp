/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:56:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/12 14:21:53 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("Pedro");
	zombie.announce();

	std::cout << std::endl;
	
	Zombie* zombie2 = newZombie("joao");
	// zombie2 = newZombie("joao");
	zombie2->announce();
	delete zombie2;
	
	std::cout << std::endl;

	randomChump("Nuno");
	std::cout << std::endl;
}
