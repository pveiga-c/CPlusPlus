/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:00:18 by correia           #+#    #+#             */
/*   Updated: 2024/04/23 16:25:40 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource 
{
	public:
		virtual ~IMateriaSource() {} 
		virtual void learnMateria(AMateria*) = 0; 
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif