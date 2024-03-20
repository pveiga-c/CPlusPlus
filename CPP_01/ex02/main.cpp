/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/20 16:24:09 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::endl << "\tADDRESS" << std::endl << std::endl;
	std::cout << "Address of string = " << &string << std::endl << std::endl;
	std::cout << "Address held by stringPTR = " <<  stringPTR << std::endl << std::endl;
	std::cout << "Address held by stringREF = " <<  &stringREF << std::endl << std::endl;

	std::cout << std::endl << "\tVALUE" << std::endl << std::endl;
	std::cout << "Value of string = " << string << std::endl << std::endl;
	std::cout << "Value pointed by stringPTR = " <<  *stringPTR << std::endl << std::endl;
	std::cout << "Value pointed by stringREF = " <<  stringREF << std::endl << std::endl;
}