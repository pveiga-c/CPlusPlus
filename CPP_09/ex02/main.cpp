/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:57:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/06 18:14:14 by pveiga-c         ###   ########.fr       */
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
		
		a.FordJohnson();
 	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}