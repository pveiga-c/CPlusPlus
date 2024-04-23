/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:47:24 by correia           #+#    #+#             */
/*   Updated: 2024/04/23 09:56:21 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>

class Character
{
	public:
		Character();
		~Character();
		Character(const Character& copy);
		Character& operator=(const Character& copy);
	
};

#endif