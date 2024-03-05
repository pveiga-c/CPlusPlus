/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:25:11 by correia           #+#    #+#             */
/*   Updated: 2024/03/05 19:54:32 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
		
	public:
		PhoneBook();
		~PhoneBook();

		//void saveContact();
		void writeContact();
		void searchContact();
		void exit();
};

#endif