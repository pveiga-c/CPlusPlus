/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:04:00 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/01 10:50:23 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	Animal *animals[10];
	
	int x = 0;
	for (x = 0; x < 5; x++)
		animals[x] = new Dog();
		
	std::cout << std::endl;
	
	for (x = 5 ; x < 10; x++)
		animals[x] = new Cat();
	
	std::cout << std::endl;
	
	for (int k = 0; k < 10; k++)
		animals[k]->makeSound();
	
	std::cout << std::endl;
	
	for (int k = 0; k < 10; k++)
		delete animals[k];

	// const Animal test("ola");
	

return 0;
}