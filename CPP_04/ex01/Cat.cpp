/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/22 17:35:01 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() /* : Animal("Cat"), brain(new Brain()) */
{
	std::cout << "Cat default constructor" << std::endl;
	_type = "Cat";
	brain = new Brain();
};

Cat::Cat( std::string type ) : brain(new Brain())
{
	this->_type = type;
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat default destructor" << std::endl;
};
Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->brain = new Brain (*copy.brain);
	std::cout << "Cat copy constructor" << std::endl;
};
Cat& Cat::operator=(const Cat &copy)
{
	if(this != &copy)
	{
		this->_type = copy._type;
		delete brain;
		this->brain = new Brain (*copy.brain);
	}
	return (*this);
};


void Cat::makeSound() const
{
	std::cout << "miau miau" << std::endl;
	
};

