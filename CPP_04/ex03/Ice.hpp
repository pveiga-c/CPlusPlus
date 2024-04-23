/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:16:45 by correia           #+#    #+#             */
/*   Updated: 2024/04/23 09:43:24 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice :AMateria
{
	private:

	public:
		Ice();
		Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& copy);

		AMateria* clone() const;
		void use(ICharacter& name);
		
};


#endif