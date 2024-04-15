/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/15 18:02:13 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap player_1("Pedro");
	ClapTrap player_2("Joao");
	

	player_1.attack("Joao");
	player_2.takeDamage(6);
	player_2.attack("Pedro");
	player_1.takeDamage(5);
	player_1.getEnergyPoint();
	player_2.getEnergyPoint();
	player_1.getHitPoint();
	player_2.getHitPoint();
	player_1.beRepaired(5);
	player_2.beRepaired(3);
	player_1.getEnergyPoint();
	player_2.getEnergyPoint();
	player_1.getHitPoint();
	player_2.getHitPoint();
}