/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:05 by correia           #+#    #+#             */
/*   Updated: 2024/03/05 20:04:57 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	 this->index = 1;
}
PhoneBook::~PhoneBook()
{
}

void	PhoneBook::writeContact()
{
	std::string cmd;
	
	// if(index > 8)
	// 	index = 1;
	
	std::cout << "	INSERT" << std::endl;
	for(int i = 0 ; i < 5; i++)
	{
		if(i == 0)
			std::cout << "First Name    :  ";
		if(i == 1)
			std::cout << "Last Name     :  ";
		if(i == 2)
			std::cout << "Nick Name     :  ";
		if(i == 3)
			std::cout << "Phone Number  :  ";
		if(i == 4)
			std::cout << "Darkest Secret:  ";
		
		getline(std::cin, cmd);
		contacts[index].saveContact(i, cmd);
	}
	index++;
	system("clear");
}

// void	PhoneBook::saveContact()
// {
	// std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
	
	// std::cout << "	INSERT" << std::endl;
	// std::cout << "First Name    :  ";
	// std::cin >> firstName;

	// std::cout << "Last Name     :  ";
	// std::cin >> lastName;
	
	// std::cout << "Nick Name     :  ";
	// std::cin >> nickName;
	
	// std::cout << "Phone Number  :  ";
	// std::cin >> phoneNumber;

	// std::cout << "Darkest Secret:  ";
	// std::cin >> darkestSecret;

	// if(index > 8)
	// 	index = 1;
	// contacts[] (index, firstName, lastName, nickName, phoneNumber, darkestSecret);
	// (index)++;
	
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << "INPUT:" << std::endl;
	// std::cout << firstName << lastName <<std::endl;
	// std::cout << nickName << std::endl;
	// std::cout << phoneNumber << std::endl;
	// std::cout << darkestSecret << std::endl;
//}

void	PhoneBook::searchContact()
{
	std::cout << "SEARCH " << std::endl;
}

void	PhoneBook::exit()
{
	std::cout << "Thanks for using the PhoneBook" << std::endl;
}