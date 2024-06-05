/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:57:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/05 08:58:56 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "Invalids Imputs" << std::endl;
		return(1);
	}
	if(argc == 2)
	{
		std::cout << "Impossible to sort" << std::endl;
		return(1);
	}
	
	try
	{
		PmergeMe a(argv + 1);
		a.printList();
		if(!a.isSort())
			a.sort();
		else
			std::cout << "is sort" << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}