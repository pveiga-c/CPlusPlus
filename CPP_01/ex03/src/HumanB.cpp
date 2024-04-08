/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 18:19:07 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB default constructor called" << std::endl;
};
HumanB::HumanB(std::string name):_name(name)
{
	std::cout << this->_name << " was created." << std::endl;
};

HumanB::~HumanB()
{
	std::cout << this->_name << " was destroyed." << std::endl;
};

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << (*this->_weaponType).getTpe() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weaponType = &weapon;
}