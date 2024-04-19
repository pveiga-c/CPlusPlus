/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:29:19 by correia           #+#    #+#             */
/*   Updated: 2024/04/19 10:21:56 by correia          ###   ########.fr       */
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
		std::cout << "Dog default desconstructor" << std::endl;
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