/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:51:05 by correia           #+#    #+#             */
/*   Updated: 2024/03/04 10:02:16 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp" 

void	PhoneBook::saveContact()
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
	
	std::cout << "	INSERT" << std::endl;
	std::cout << "First Name    :  ";
	std::cin >> firstName;

	std::cout << "Last Name     :  ";
	std::cin >> lastName;
	
	std::cout << "Nick Name     :  ";
	std::cin >> nickName;
	
	std::cout << "Phone Number  :  ";
	std::cin >> phoneNumber;

	std::cout << "Darkest Secret:  ";
	std::cin >> darkestSecret;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "INPUT:" << std::endl;
	std::cout << firstName << lastName <<std::endl;
	std::cout << nickName << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}

void	PhoneBook::searchContact()
{
	std::cout << "SEARCH " << std::endl;
}

void	PhoneBook::exit()
{
	std::cout << "Thanks for using the PhoneBook" << std::endl;
}