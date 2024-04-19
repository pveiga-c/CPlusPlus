/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:49 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 18:44:29 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog default constructor" << std::endl;
};

Dog::Dog( std::string type ) : brain(new Brain())
{
	std::cout << "Animal Constructor" << std::endl;
	this->_type = type;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
	delete brain;
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