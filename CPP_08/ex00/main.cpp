/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 09:24:02 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	try
	{
		std::cout << "***************LIST***************" << std::endl;
		std::cout << std::endl;
		std::list<int> list;
		for(int i = 0; i < 10; i++)
			list.push_back(i);

		std::list<int>::iterator find = easyfind(list, 4);
		std::cout << "Value \"" << *find << "\" found" << std::endl;

		std::list<int>::iterator find2 = easyfind(list, 16);
		std::cout << "Value \"" << *find2<< "\" found" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		std::cout << "***************VECTOR***************" << std::endl;
		std::cout << std::endl;
		std::vector<int> vector;
		for(int i = 0; i < 15; i++)
			vector.push_back(i);

		std::vector<int>::iterator find3 = easyfind(vector, 7);
		std::cout << "Value \"" << *find3 << "\" found" << std::endl;

		std::vector<int>::iterator find4 = easyfind(vector, 17);
		std::cout << "Value \"" << *find4 << "\" found" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
