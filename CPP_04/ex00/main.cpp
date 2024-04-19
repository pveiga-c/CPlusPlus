/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:04:00 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 17:53:28 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;
	
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* z = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	z->makeSound();
	wrongmeta->makeSound();
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	delete meta;
	delete wrongmeta;
	delete j;
	delete i;
	delete z;

return 0;
}