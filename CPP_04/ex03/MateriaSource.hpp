/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:05:12 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/23 17:05:50 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define LIB_SIZE  4

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_library[4];
public:
	MateriaSource();
	MateriaSource(AMateria* m);
	MateriaSource(MateriaSource const & rhs);
	~MateriaSource();

	MateriaSource& operator=(MateriaSource const & rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif