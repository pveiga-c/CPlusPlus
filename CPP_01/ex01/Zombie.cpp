/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:55:19 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 17:53:06 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str) 
{
	this->_name = str;
}

Zombie::Zombie()
{
	std::cout << "Zombie was created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
