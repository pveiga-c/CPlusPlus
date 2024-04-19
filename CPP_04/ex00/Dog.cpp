/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:49 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 16:05:51 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

	Dog::Dog() : Animal()
	{
		std::cout << "Dog default constructor" << std::endl;
		this->type = "Dog";
	};
	
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
			this->type = copy.type;
		return(*this);
	};
	

	void Dog::makeSound() const
	{
		std::cout << "woof-woof" << std::endl;
	};