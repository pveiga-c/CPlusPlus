/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:03:24 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/01 10:49:16 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal( std::string type );
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal &copy);
	
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif