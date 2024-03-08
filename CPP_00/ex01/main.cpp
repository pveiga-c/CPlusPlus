/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:17 by correia           #+#    #+#             */
/*   Updated: 2024/03/08 18:15:01 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
	std::string	command;
	PhoneBook	phoneBook;
	
	system("clear");
	std::cout << "		Welcome to your PhoneBook" << std::endl << std::endl;
	while(1)
	{	
		std::cout << "	Enter the command." << std::endl;
		std::cout << "	ADD    -> Save a new contact." << std::endl;
		std::cout << "	SEARCH -> Display a specific contact." << std::endl;
		std::cout << "	EXIT   -> To leave the PhoneBook." << std::endl;
		std::cout << std::endl;
		std::cout << "Comand : ";

		getline(std::cin, command);
		system("clear");
		if (std::cin.eof())
			break;
		if(command.compare("ADD") == 0)
			phoneBook.writeContact();
		else if(command.compare("SEARCH") == 0)
			phoneBook.searchContact();
		else if (command.compare("EXIT") == 0)
		{
			phoneBook.exit();
			break;
		}
		else if (command.compare("ADD") != 0 || command.compare("SEARCH") != 0 || command.compare("EXIT") != 0)
			std::cout << "The command \"" << command << "\" is invalid." << std::endl << std::endl;
		std::cin.clear();
	}
}
