/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:05 by correia           #+#    #+#             */
/*   Updated: 2024/03/06 09:38:28 by correia          ###   ########.fr       */
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

void	PhoneBook::searchContact()
{
	int i = 0;
	int j = 0;
	std::cout << "|     index|first name| last name| nick name| " << std::endl;

	while(i < 8)
	{
		/* if(contacts[i].readString(0).size() == 0)
			break; */
		std::cout << "|         " << i << "|";
		while(j < 3)
		{
			if(contacts[i].readString(i).size() > 10)
			{
				std::cout << std::setw(9) << contacts[i].readString(i);
				std::cout << std::setw(1) << ".";
			}
			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << contacts[i].readString(i);
			std::cout << "|";
			j++;
		}
		std::cout << std::endl;
		i++;
	}









	
}





void	PhoneBook::exit()
{
	std::cout << "Thanks for using the PhoneBook" << std::endl;
}