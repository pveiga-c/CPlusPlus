/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:46 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/15 19:17:53 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ClapTrap
{
	protected:
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
		std::string	_name;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap &operator=(const ClapTrap &copy);
		~ClapTrap();
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	getHitPoint();
		void	getEnergyPoint();
		
};

#endif