/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/21 10:05:36 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(void)
{

	std::cout <<"***************LIST***************" << std::endl;
	std::cout << std::endl;

	std::list<int> list;

	for(int i = 0; i < 15; i++)
		list.push_back(i);

	std::list<int>::iterator find  = easyfind(list, 10);
	if(find == list.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value \"" << *find << "\" found" << std::endl;
	
	std::cout << std::endl;
	std::cout <<"**********************************" << std::endl;
	std::cout << std::endl;

	std::list<int>::iterator find2  = easyfind(list, 15);
	if(find2 == list.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value \"" << *find << "\" found" << std::endl;

	std::cout << std::endl;
	std::cout <<"***************VECTOR***************" << std::endl;
	std::cout << std::endl;

	std::vector<int> vector;

	for(int i = 0; i < 15; i++)
		vector.push_back(i);

	std::vector<int>::iterator find3 = easyfind(vector, 7);
	if(find3 == vector.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value \"" << *find3 << "\" found" << std::endl;
	
	std::cout << std::endl;
	std::cout <<"**********************************" << std::endl;
	std::cout << std::endl;

	std::vector<int>::iterator find4  = easyfind(vector, 17);
	if(find4 == vector.end())
		std::cout << "Value not found" << std::endl;
	else
		std::cout << "Value \"" << *find4 << "\" found" << std::endl;
}

