/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:16:45 by correia           #+#    #+#             */
/*   Updated: 2024/04/23 09:24:20 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(std::string type);
		~Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);

		AMateria* clone() const;
		void use(ICharacter& name);
		
};


#endif