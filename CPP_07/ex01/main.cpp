/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 08:35:34 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int length = 5;

	int arrInt[] = { 1, 2, 3, 4, 5 };
	double arrDouble[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	char arrChar[] = { 'a', 'b', 'c', 'd', 'e' };
	std::string arrString[] = { "one", "two", "three", "four", "five" };
	
	std::cout << "int: " << std::endl;
	iter<int>(arrInt, length, printData<int>);

	std::cout << std::endl << "double: " << std::endl;
	iter<double>(arrDouble, length, printData<double>);

	std::cout << std::endl << "char: " << std::endl;
	iter<char>(arrChar, length, printData<char>);

	std::cout << std::endl << "str: " << std::endl;
	iter<std::string>(arrString, length, printData<std::string>);

	return (0);
}