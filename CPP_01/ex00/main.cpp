/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:56:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/13 11:42:19 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie;
	zombie.announce();

	std::cout << std::endl;
	

	Zombie zombie2("Pedro");
	zombie2.announce();

	std::cout << std::endl;
	
	Zombie* zombie3 = newZombie("joao");
	// zombie3 = newZombie("joao");
	zombie3->announce();
	delete zombie3;
	
	std::cout << std::endl;

	randomChump("Nuno");
	std::cout << std::endl;
}
