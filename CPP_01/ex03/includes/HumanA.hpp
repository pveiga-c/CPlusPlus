/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/08 17:54:48 by pveiga-c         ###   ########.fr       */
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
		HumanA(Weapon &_weapon);
		HumanA(std::string name, Weapon &_weapon);
		~HumanA();
		void attack();
	private:
		Weapon&		_weaponType;
		std::string	_name;
};

#endif