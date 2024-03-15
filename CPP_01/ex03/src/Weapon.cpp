/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 19:44:15 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon Default constructor called" << std::endl;
}

Weapon::Weapon(std::string newType):m_type(newType)
{
	std::cout << "Weapon created with type" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}
const	std::string &Weapon::getTpe()
{
	return (this->m_type);
}
void	Weapon::setType(std::string newType)
{
	this->m_type = newType;
}