/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:21 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/13 11:36:12 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
	private:
		std::string name;
	
	public:
		void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif