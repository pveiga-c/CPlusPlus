/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:25:39 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/05 20:00:25 by pveiga-c         ###   ########.fr       */
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
