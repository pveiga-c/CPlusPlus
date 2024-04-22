/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:56 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/22 16:04:53 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
		
	public:
		Dog();
		Dog( std::string type );
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog &copy);
		
	
		void makeSound() const;
		void newBrain();
};

#endif