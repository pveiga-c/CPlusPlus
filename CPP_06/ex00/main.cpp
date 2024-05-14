/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:38:57 by correia           #+#    #+#             */
/*   Updated: 2024/05/13 18:35:35 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if(argc != 2)
		std::cout << "Imput invalid!" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return (0);
}