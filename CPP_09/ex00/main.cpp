/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:57:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/01 19:52:43 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if(argc != 2)
		std::cout << "Error: could not open file." << std::endl;
	try
	{
		BitcoinExchange a;
		a.parsingCsv();
		a.parsingTxt(argv[1]);
	}
	catch(const std::exception& e)
	{
		 std::cout << e.what();
	}
	
	


}