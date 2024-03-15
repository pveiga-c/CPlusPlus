/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:55 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 09:21:08 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <limits>

class Zombie
{
	public:
		void announce();
		void setName(std::string name);
	private:
		std::string m_name;
		
	public:
		Zombie();
		~Zombie();
	
};

Zombie*	zombieHorbe( int N, std::string name);

#endif