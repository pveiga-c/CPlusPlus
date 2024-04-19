/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:49 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 18:38:11 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;
};

Dog::Dog( std::string type )
{
	std::cout << "Animal Constructor" << std::endl;
	this->_type = type;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
};

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = copy;
};
Dog& Dog::operator=(const Dog &copy)
{
	if(this != &copy)
		this->_type = copy._type;
	return(*this);
};


void Dog::makeSound() const
{
	std::cout << "woof-woof" << std::endl;
};