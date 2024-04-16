/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:43 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/16 09:25:39 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noName"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
};
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap " << copy._name << " is created" << std::endl;
	*this = copy;
};
ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
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
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
}


void	ClapTrap::attack(const std::string& target)
{
	if(this->_energyPoint > 0 && this->_hitPoint > 0)
	{	
		std::cout << "ClapTrap " << this->_name << " attack " << target;
		std::cout << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
		this->_energyPoint -= 1;
	}
	else if(_energyPoint <= 0)
		std::cout << "ClapTrap "<< this->_name << " does not have energy point left to attack" << std::endl;
	else if(_hitPoint <= 0)
		std::cout << "ClapTrap "<< this->_name << " does not have hit point left to attack" << std::endl;
};
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take a damage " << amount << " hit points!" << std::endl;
	this->_hitPoint -= amount;
};
void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoint > 0 && this->_hitPoint > 0)
	{	
		std::cout << "ClapTrap " << this->_name << " be repairded!" << std::endl;
		this->_energyPoint -= 1;
		this->_hitPoint += amount;
	}
	else
		std::cout << "ClapTrap "<< this->_name << " does not have hit point left to repaired" << std::endl;
};

void	ClapTrap::getHitPoint()
{
		std::cout << "ClapTrap have " << _hitPoint << " hit points!" << std::endl;
};
void	ClapTrap::getEnergyPoint()
{
	std::cout << "ClapTrap have " << _energyPoint << " energy points!" << std::endl;
};