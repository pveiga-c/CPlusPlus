/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:05 by correia           #+#    #+#             */
/*   Updated: 2024/03/06 19:33:57 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "stdio.h"

PhoneBook::PhoneBook()
{
	 this->index = 0;
}
PhoneBook::~PhoneBook()
{
}

void	PhoneBook::writeContact()
{
	std::string cmd;
	
	if(index > 7)
		index = 0;
	
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
	PhoneBook::printTable();

	int op = 0;
	int j;
	std::string option;
	while(1)
	{	
		std::cout << std::endl;
		std::cout << "Enter the index you want to view: (1 to 8)" << std::endl;
		std::cout << "Or 9 to return to the initial menu" << std::endl;
		
		std::getline(std::cin, option);
		std::stringstream buf(option);
		buf >> op;
	
		if(op > 0 && op < 9 && op - 1 < index)
		{
			j = 0;
			while(j < 5)
			{
				if(j == 0)
					std::cout << "First Name    : ";
				else if(j == 1)
					std::cout << "Last Name     : ";
				else if(j == 2)
					std::cout << "Nickname      : ";
				else if(j == 3)
					std::cout << "Phone Number  : ";
				else if(j == 4)
					std::cout << "Darkest Secret: ";
				std::cout << contacts[op - 1].readString(j) << std::endl;
				j++;
			}	
		}
		else if (op == 9)
		{
			system("clear");
			return ;
		}
		else if(op > 0 && op < 9 && op > index)
		{
			std::cout << "The contact is empty." << std::endl;
		}
		else 
		{
			std::cout << "Invalid Index. " << std::endl;
		}
	}
	
}

void	PhoneBook::printTable()
{
	int i = 0;
	int j;
		
	std::cout << "|     index|first name| last name| nick name| " << std::endl;

	while(i < 8)
	{
		if(contacts[i].readString(0).size() == 0)
			break;
		std::cout << "|         " << i + 1 << "|";
		j = 0;
		while(j < 3)
		{
			if(contacts[i].readString(j).size() > 10)
			{
				std::cout << std::setw(9) << contacts[i].readString(j);
				std::cout <<  "." << std::setw(1);
			}
			else
			{	
				std::cout << std::setfill(' ') << std::setw(10);
				std::cout << contacts[i].readString(j);
			}
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