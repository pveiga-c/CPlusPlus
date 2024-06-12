/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:38:57 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 18:37:59 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if(argc != 2)
		std::cout << "input invalid!" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return (0);
}