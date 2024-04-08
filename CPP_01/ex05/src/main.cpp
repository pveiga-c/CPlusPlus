/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 18:58:38 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main( int argc, char **argv )
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		std::cout << "Usage: ./Harl [DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return 0;
	}
	harl.complain(argv[1]);
}

// int main()
// {
// 	Harl harl;

// 	harl.complain("DEBUG");
// 	std::cout << std::endl;
// 	// harl.complain("INFO");
// 	// std::cout << std::endl;
// 	// harl.complain("WARNING");
// 	// std::cout << std::endl;
// 	// harl.complain("ERROR");
// 	// std::cout << std::endl;
// }
