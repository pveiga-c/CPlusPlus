/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:40 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 16:05:45 by pveiga-c         ###   ########.fr       */
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
	std::cout << "Cat default destructor" << std::endl;
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