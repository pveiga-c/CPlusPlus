/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:49:13 by correia           #+#    #+#             */
/*   Updated: 2024/04/16 09:58:07 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "noName";
	std::cout << "FragTrap " << this->_name << " is created" << std::endl;
 	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
};
FragTrap::FragTrap(std::string name)
{
		std::cout << "FragTrap " << this->_name << " is created" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
};
FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "fragTrap " << copy._name << " is created" << std::endl;
	*this = copy;
};
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap " << copy._name << " is created" << std::endl;
	if(this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoint = copy._hitPoint;
		this->_energyPoint = copy._energyPoint;
		this->_attackDamage = copy._attackDamage;
	}
	return(*this);
};
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is destroyed" << std::endl;

};

void	FragTrap::attack(const std::string& target)
{
	if(this->_energyPoint > 0 && this->_hitPoint > 0)
	{	
		std::cout << "FragTrap " << this->_name << " attack " << target;
		std::cout << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
		this->_energyPoint--;
	}
	else if(_energyPoint <= 0)
		std::cout << "FragTrap "<< this->_name << " does not have energy point left to attack" << std::endl;
	else if(_hitPoint <= 0)
		std::cout << "FragTrap "<< this->_name << " does not have hit point left to attack" << std::endl;
};
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name <<" requests High Fives!" << std::endl;
	
};