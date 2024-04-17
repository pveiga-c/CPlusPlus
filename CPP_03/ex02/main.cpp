/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/17 08:44:18 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/* int main()
{
	FragTrap player_1("Pedro");

	player_1.attack("Joao");
	player_1.takeDamage(5);
	player_1.getEnergyPoint();
	player_1.getHitPoint();
	player_1.beRepaired(5);
	player_1.getEnergyPoint();
	player_1.getHitPoint();
	player_1.highFivesGuys();
} */

//faz um main que utilize as funcaoes todas
int main()
{
	ClapTrap player_1("Pedro");
	ScavTrap player_2("Joao");
	FragTrap player_3("Maria");

	player_1.attack("Joao");
	player_1.takeDamage(5);
	player_1.getEnergyPoint();
	player_1.getHitPoint();
	player_1.beRepaired(5);
	player_1.getEnergyPoint();
	player_1.getHitPoint();
	
	std::cout << std::endl;
	
	player_2.attack("Pedro");
	player_2.takeDamage(5);
	player_2.getEnergyPoint();
	player_2.getHitPoint();
	player_2.beRepaired(5);
	player_2.getEnergyPoint();
	player_2.getHitPoint();
	player_2.guardGate();

	std::cout << std::endl;

	player_3.attack("Maria");
	player_3.takeDamage(5);
	player_3.getEnergyPoint();
	player_3.getHitPoint();
	player_3.beRepaired(5);
	player_3.getEnergyPoint();
	player_3.getHitPoint();
	player_3.highFivesGuys();
}
