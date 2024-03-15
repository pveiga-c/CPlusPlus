/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:50 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/15 09:21:52 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorbe( int N, std::string name )
{
	Zombie *zombieHorbe = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zombieHorbe[i].setName(name);
	}
	return(zombieHorbe);

}