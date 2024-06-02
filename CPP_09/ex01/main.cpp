/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:57:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/02 16:34:48 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Bad imput" << std::endl;
		return (1);
	}

	try
	{
		RPN rpn;
		rpn.fillStack(argv[1]);
		rpn.calculatRpn();
	}
	catch(const std::exception& e)
	{
		 std::cout << e.what();
	}
	
	


}