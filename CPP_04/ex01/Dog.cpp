/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:49 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/22 17:35:34 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()/*  : Animal("Dog"), brain(new Brain()) */
{
	std::cout << "Dog default constructor" << std::endl;
	_type = "Dog";
	brain = new Brain();
};

Dog::Dog( std::string type ) : brain(new Brain())
{
	this->_type = type;
	std::cout << "Animal Constructor" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog default destructor" << std::endl;
};

Dog::Dog(const Dog& copy)
{
	this->brain = new Brain(*copy.brain);
	std::cout << "Dog copy constructor" << std::endl;
};
Dog& Dog::operator=(const Dog &copy)
{
	if(this != &copy)
	{
		this->_type = copy._type;
		delete brain;
		this->brain = new Brain (*copy.brain);
	}
	return(*this);
};


void Dog::makeSound() const
{
	std::cout << "woof-woof" << std::endl;
};

