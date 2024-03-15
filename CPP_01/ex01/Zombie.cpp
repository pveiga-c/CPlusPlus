/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:55:19 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 09:20:59 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string str) 
{
	this->m_name = str;
}

Zombie::Zombie()
{
	std::cout << "Zombie was created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->m_name << " was destroyed." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
