/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 19:44:51 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"


int main(int argc, char **argv)
{
	Harl harl;

	if(argc == 2)
	{
		std::string level = argv[1];
		harl.complain(level);
	}
	else
	{
		std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING, ERROR]" << std::endl;
	}


}