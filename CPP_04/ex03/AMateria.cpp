/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:50:58 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/01 11:04:20 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("noType")
{
	std::cout << "AMateria default constructor" << std::endl;
};
AMateria::AMateria(std::string const& type)
{
	_type = type;
	std::cout << "AMateria constructor" << std::endl;
};
AMateria::~AMateria()
{
	std::cout << "AMateria default destructor" << std::endl;
};
AMateria::AMateria(const AMateria& copy)
{
	std::cout << "AMateria copy" << std::endl;
	*this = copy;
};
AMateria& AMateria::operator=(const AMateria &copy)
{
	if(this != &copy)
		this->_type = copy._type;
	return (*this);
};


std::string const & AMateria::getType() const
{
	return(_type);
};
