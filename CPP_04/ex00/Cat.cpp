/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:32:39 by correia           #+#    #+#             */
/*   Updated: 2024/04/19 10:22:03 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
};

Cat::~Cat()
{
	std::cout << "Cat default constructor" << std::endl;
};
Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = copy;
};
Cat& Cat::operator=(const Cat &copy)
{
	if(this != &copy)
		this->type = copy.type;
	return (*this);
};


void Cat::makeSound() const
{
	std::cout << "miau miau" << std::endl;
	
};