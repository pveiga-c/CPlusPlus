/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:50 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/12 16:19:03 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorbe( int N, std::string name )
{
	Zombie *zombieHorbe = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zombieHorbe[i].passedName(name);
	}
	return(zombieHorbe);

}