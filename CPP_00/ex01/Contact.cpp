/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:25:39 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/06 09:38:43 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

void	Contact::saveContact(int index, std::string cmd)
{
	if(index == 0)
		this->firstName = cmd;
	if(index == 1)
		this->lastName = cmd;
	if(index == 2)
		this->nickName = cmd;
	if(index == 3)
		this->phoneNumber = cmd;
	if(index == 4)
		this->darkestSecret = cmd;
}

std::string Contact::readString(int index)
{
	if(index == 0)
		return this->firstName;
	if(index == 1)
		return this->lastName;
	if(index == 2)
		return this->nickName;
	if(index == 3)
		return this->phoneNumber;
	if(index == 4)
		return this->darkestSecret;
	return NULL;
}
