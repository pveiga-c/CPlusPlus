/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 10:03:47 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(Weapon &m_weapon);
		HumanA(std::string name, Weapon &m_weapon);
		~HumanA();
		void attack();
	private:
		Weapon&		m_weaponType;
		std::string	m_name;
};

#endif+