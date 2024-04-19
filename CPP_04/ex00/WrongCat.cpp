/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 17:46:23 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "WrongCat default constructor" << std::endl;
};

WrongCat::WrongCat( std::string type )
{
	std::cout << "WrongCat Constructor" << std::endl;
	this->_type = type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor" << std::endl;
};
WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = copy;
};
WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	if(this != &copy)
		this->_type = copy._type;
	return (*this);
};


void WrongCat::makeSound() const
{
	std::cout << "miau miau" << std::endl;
	
};