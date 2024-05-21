/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/20 10:04:31 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Array.hpp"
#include <iostream>

int main(void)
{
	try 
	{
		/* Valid tests */
		Array<int> a;
		Array<int> b(5);
		Array<char> c(3);

		/* Setting values */
		for (int i = 0; i < 5; i++)
			b[i] = i;

		///Copy assignment operator
		a = b;

		//Printing
		for (int i = 0; i < 5; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		std::cout << "===========" << std::endl;

		/* Setting values */
		c[0] = 'o';
		c[1] = 'l';
		c[2] = 'a';

		//Printing
		for (int i = 0; i < 3; i++)
			std::cout << c[i];
		std::cout << std::endl;
		std::cout << "===========" << std::endl;

		/* Invalid tests */
		std::cout << c[10];
		std::cout << a[-1];
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
}