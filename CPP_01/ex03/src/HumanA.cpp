/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 18:19:21 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/HumanA.hpp"

HumanA::HumanA(Weapon &weapon):_weaponType(weapon)
{
	// _weaponType = weapon;
	std::cout << "HumanA default constructor called" << std::endl;
};
HumanA::HumanA(std::string name, Weapon &weapon):_weaponType(weapon), _name(name)
{
	//_name = name;
	//_weaponType = weapon
	std::cout << this->_name << " was created." << std::endl;

};

HumanA::~HumanA()
{
	std::cout << this->_name << " was destroyed." << std::endl;
};

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weaponType.getTpe() << std::endl;
}
