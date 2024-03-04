/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:17 by correia           #+#    #+#             */
/*   Updated: 2024/03/04 10:12:18 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (int argc, char **argv)
{
	std::string	command;
	PhoneBook	phoneBook;
	
	(void)argv;
	if(argc != 1)
	{
		std::cout << "The PhoneBook does not support arguments" << std::endl;
		std::cout << "To start is: ./PhoneBook" << std::endl;
		return (0);
	}
	std::cout << "		Welcome to your PhoneBook" << std::endl << std::endl;
	while(1)
	{	
		std::cout << "	Enter the command." << std::endl;
		std::cout << "	ADD    -> Save a new contact." << std::endl;
		std::cout << "	SEARCH -> Display a specific contact." << std::endl;
		std::cout << "	EXIT   -> To leave the PhoneBook." << std::endl;
		std::cout << std::endl;
		std::cout << "Comand : ";

		std::cin >> command;
		
		if(command == "ADD")
			phoneBook.saveContact();
		else if(command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
		{
			phoneBook.exit();
			break;
		}
		else if (command != "ADD" || command != "SEARCH" || command != "EXIT")
			std::cout << "The command \"" << command << "\" is invalid." << std::endl << std::endl;
	}
}
