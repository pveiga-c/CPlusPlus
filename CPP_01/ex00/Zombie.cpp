/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:03 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/14 12:44:53 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie::Zombie( void )
{
	this->name = "No name Zombie";
	std::cout << this->name << ": was created." << std::endl;
} */

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << ": was created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->name << ": was destroyed." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
