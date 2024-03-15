/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 10:13:33 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string newType):m_type(newType)
{
    
}

Weapon::~Weapon()
{
	
}
const	std::string &Weapon::getTpe()
{
	return (this->m_type);
}
void	Weapon::setType(std::string newType)
{
	this->m_type = newType;
}