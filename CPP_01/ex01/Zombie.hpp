/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:55 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/12 16:17:17 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie
{
	public:
		void announce();
		void passedName(std::string name);
	private:
		std::string name;
		
	public:
		Zombie();
		~Zombie();
	
};

Zombie*	zombieHorbe( int N, std::string name);

#endif