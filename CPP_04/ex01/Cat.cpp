/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 18:44:16 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat default constructor" << std::endl;
};

Cat::Cat( std::string type ) : brain(new Brain())
{
	std::cout << "Cat Constructor" << std::endl;
	this->_type = type;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
	delete brain;
};
Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = copy;
};
Cat& Cat::operator=(const Cat &copy)
{
	if(this != &copy)
		this->_type = copy._type;
	return (*this);
};


void Cat::makeSound() const
{
	std::cout << "miau miau" << std::endl;
	
};