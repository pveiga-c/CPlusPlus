/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:06:57 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/17 08:57:10 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " is created" << std::endl;
 	ClapTrap::_energyPoint = 50;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " is created" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap " << copy._name << " is created" << std::endl;
	*this = copy;
};
ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
		std::cout << "ScavTrap " << copy._name << " is created" << std::endl;
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
	std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
};

void	ScavTrap::attack(const std::string& target)
{
	if(this->_energyPoint > 0 && this->_hitPoint > 0)
	{	
		std::cout << "ScavTrap " << this->_name << " attack " << target;
		std::cout << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
		this->_energyPoint--;
	}
	else if(_energyPoint <= 0)
		std::cout << "ScavTrap "<< this->_name << " does not have energy point left to attack" << std::endl;
	else if(_hitPoint <= 0)
		std::cout << "ScavTrap "<< this->_name << " does not have hit point left to attack" << std::endl;
};
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
};
