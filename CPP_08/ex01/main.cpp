/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 09:44:35 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main(void)
{
	try 
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(5);
		sp.addNumber(21);
		sp.addNumber(9);
		sp.addNumber(11);
			
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}

	try
	{
		int arr[] = { 12, 21, 3, 42, 5, 666, 77, 81, 90, 10 };
		const int arrSize = sizeof(arr) / sizeof(arr[0]);
		std::vector<int> vect(arr, arr + arrSize);
		Span sp = Span(10);
		//sp.addNumber(6);
		sp.addNumbers(vect);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
try
	{
		Span sp = Span(10000);
		std::vector<int> largeVector(10000);
		for (int i = 0; i < 10000; ++i)
		{
			largeVector[i] = i; // Preenche o vetor com 0, 1, 2, ..., 9999
		}
		sp.addNumbers(largeVector.begin(), largeVector.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
	std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}

