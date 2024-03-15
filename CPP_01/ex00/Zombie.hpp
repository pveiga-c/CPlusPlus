/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:21 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/14 12:46:36 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"

class Zombie
{
	public:
		//Zombie();
		Zombie(std::string name = "No name Zombie:");
		~Zombie();
	private:
		std::string name;
	
	public:
		void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif