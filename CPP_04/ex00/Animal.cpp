/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:33 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 16:05:34 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"

Animal::Animal(): type("noAnimal")
{
	std::cout << "Animal default constructor" << std::endl;
	
};

Animal::~Animal()
{
	std::cout << "Animal default destructor" << std::endl;
	
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