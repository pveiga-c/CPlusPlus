/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:57:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/02 09:27:47 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	(void)argc;

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