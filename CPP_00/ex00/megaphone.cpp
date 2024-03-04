/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:07:02 by correia           #+#    #+#             */
/*   Updated: 2024/03/02 09:55:36 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int i = 0;
	int j;

		if (argc <= 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

		while(++i <= (argc - 1))
		{
			j = 0;
			while(argv[i][j])
			{
				std::cout << (char)std::toupper(argv[i][j]);
				j++;
			}
		}
		std::cout << std::endl;
}