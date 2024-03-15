/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 10:10:53 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include "Weapon.hpp"

class HumanB
{

	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
	private:
		Weapon*		m_weaponType;
		std::string	m_name;
};

#endif