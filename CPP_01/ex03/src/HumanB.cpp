/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 19:45:46 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB default constructor called" << std::endl;
};
HumanB::HumanB(std::string name):m_name(name)
{
	std::cout << "HumanB was created." << std::endl;
};

HumanB::~HumanB()
{
	std::cout << this->m_name << " was destroyed." << std::endl;
};

void	HumanB::attack()
{
	std::cout << this->m_name << " attacks with their " << (*this->m_weaponType).getTpe() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->m_weaponType = &weapon;
}