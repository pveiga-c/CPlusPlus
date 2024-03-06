/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:25:39 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/06 17:47:40 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

void	Contact::saveContact(int i, std::string cmd)
{
	if(i == 0)
		this->firstName = cmd;
	if(i == 1)
		this->lastName = cmd;
	if(i == 2)
		this->nickName = cmd;
	if(i == 3)
		this->phoneNumber = cmd;
	if(i == 4)
		this->darkestSecret = cmd;
}

std::string Contact::readString(int i)
{
	if(i == 0)
		return this->firstName;
	if(i == 1)
		return this->lastName;
	if(i == 2)
		return this->nickName;
	if(i == 3)
		return this->phoneNumber;
	if(i == 4)
		return this->darkestSecret;
	return NULL;
}
