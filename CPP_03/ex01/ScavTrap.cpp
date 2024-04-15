/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:06:57 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/15 19:37:54 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "noName";
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	
};
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ClapTrap " << copy._name << " is created" << std::endl;
	*this = copy;
};
ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
		std::cout << "ClapTrap " << copy._name << " is created" << std::endl;
	if(this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoint = copy._hitPoint;
		this->_energyPoint = copy._energyPoint;
		this->_attackDamage = copy._attackDamage;
	}
	return(*this);
};

ScavTrap::~ScavTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
};
void	ScavTrap::attack(const std::string& target)
{
	
};
void	ScavTrap::guardGate()
{
	
};
