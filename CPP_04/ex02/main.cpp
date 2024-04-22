/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:04:00 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/22 17:53:41 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;


	Animal *animals[10];
	
	int x = 0;
	for (x = 0; x < 5; x++)
		animals[x] = new Dog();
	for (x = 5 ; x < 10; x++)
		animals[x] = new Cat();
	for (int k = 0; k < 10; k++)
		animals[k]->makeSound();
	for (int k = 0; k < 10; k++)
		delete animals[k];

	// const Animal test("ola");
	

return 0;
}