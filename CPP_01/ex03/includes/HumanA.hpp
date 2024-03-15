/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 18:56:54 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include "../includes/Weapon.hpp"

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

#endif