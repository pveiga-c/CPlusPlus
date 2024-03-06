/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:25:35 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/06 09:38:38 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
// #include "PhoneBook.hpp"

class Contact
{
	private:	
		std::string	firstName;
		std::string	lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		~Contact();
		void	saveContact(int index, std::string cmd);
		std::string readString(int index);

};

#endif