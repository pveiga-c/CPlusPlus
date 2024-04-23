/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:00:18 by correia           #+#    #+#             */
/*   Updated: 2024/04/23 10:02:25 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria"

class IMateriaSource 
{
	public:
		virtual ~IMateriaSource() {} 
		virtual void learnMateria(AMateria*) = 0; 
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif