/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:24:26 by correia           #+#    #+#             */
/*   Updated: 2024/04/19 10:23:23 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
	
};

Animal::~Animal()
{
	std::cout << "Animal default descontructor" << std::endl;
	
};
Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = copy;
	
};
Animal& Animal::operator=(const Animal &copy)
{
	if(this != &copy)
		this->type = copy.type;
	return (*this);
};


void Animal::makeSound() const
{
	std::cout << "The animal makes a generic sound" << std::endl;
};

std::string Animal::getType() const 
{
	return (this->type);
}