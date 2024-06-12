/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:57:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 18:37:59 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Bad input" << std::endl;
		return (1);
	}

	try
	{
		RPN rpn;
		rpn.mathPolish(argv[1]);

	}
	catch(const std::exception& e)
	{
		 std::cout << e.what();
	}

	
}

