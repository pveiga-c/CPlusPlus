/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/19 17:29:43 by pveiga-c         ###   ########.fr       */
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
		std::cout << "Right input -> ./harl DEBUG or INFO or WARNING or ERROR \"" << std::endl;
	}


}