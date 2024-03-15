/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 19:46:17 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/HumanA.hpp"

HumanA::HumanA(Weapon &weapon):m_weaponType(weapon)
{
	// m_weaponType = weapon;
	std::cout << "HumanA default constructor called" << std::endl;
};
HumanA::HumanA(std::string name, Weapon &weapon):m_weaponType(weapon), m_name(name)
{
	//m_name = name;
	//m_weaponType = weapon
	std::cout << "HumanA was created." << std::endl;

};

HumanA::~HumanA()
{
	std::cout << this->m_name << " was destroyed." << std::endl;
};

void	HumanA::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weaponType.getTpe() << std::endl;
}
