/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 10:07:31 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon):m_weaponType(weapon)
{
	// m_weaponType = weapon;
};
HumanA::HumanA(std::string name, Weapon &weapon):m_weaponType(weapon), m_name(name)
{
	//m_name = name;
	//m_weaponType = weapon
};

HumanA::~HumanA()
{
	
};

void	HumanA::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weaponType.getTpe() << std::endl;
}
