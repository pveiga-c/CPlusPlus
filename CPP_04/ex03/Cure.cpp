/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:24:38 by correia           #+#    #+#             */
/*   Updated: 2024/04/23 09:26:39 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("notype")
{
	std::cout << "Cure default constructor" << std::endl;
};

Cure::Cure(std::string type) 
{
	std::cout << "Cure default constructor" << std::endl;
};
Cure::~Cure()
{
	
};
Cure::Cure(const Cure& copy)
{
	std::cout << "Cure copy" << std::endl;
	*this = copy;
};

Cure& Cure::operator=(const Cure& copy)
{
	if(this != &copy)
		this->_type = copy._type;
	return(*this);
};

AMateria* Cure::clone() const
{
	
};

void Cure::use(ICharacter& name)
{
	
};
