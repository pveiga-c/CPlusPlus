/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 10:10:39 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB()
{
	
};
HumanB::HumanB(std::string name):m_name(name)
{
	
};

HumanB::~HumanB(){
	
};

void	HumanB::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weaponType->getTpe() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->m_weaponType = &weapon;
}