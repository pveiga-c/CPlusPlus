/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/16 09:29:09 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap player_1("Pedro");

	player_1.attack("Joao");
	player_1.takeDamage(5);
	player_1.getEnergyPoint();
	player_1.getHitPoint();
	player_1.beRepaired(5);
	player_1.getEnergyPoint();
	player_1.getHitPoint();
	player_1.guardGate();
}
