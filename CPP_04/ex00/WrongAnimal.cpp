/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:33 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 17:47:51 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("noAnimal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
	
};

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor" << std::endl;
	
};
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = copy;
	
};
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	if(this != &copy)
		this->_type = copy._type;
	return (*this);
};


void WrongAnimal::makeSound() const
{
	std::cout << "The animal makes a generic sound" << std::endl;
};

std::string WrongAnimal::getType() const 
{
	return (this->_type);
}