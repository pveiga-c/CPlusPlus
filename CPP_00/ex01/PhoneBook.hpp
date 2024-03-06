/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:25:11 by correia           #+#    #+#             */
/*   Updated: 2024/03/06 08:50:17 by correia          ###   ########.fr       */
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
#include <sstream>
class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
		
	public:
		PhoneBook();
		~PhoneBook();

		void writeContact();
		void searchContact();
		void exit();
};

#endif