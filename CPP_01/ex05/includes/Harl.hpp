/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/18 09:44:18 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <sstream>
#include <limits>

class Harl
{
	public:
		Harl();
		~Harl();

		void	complain ( std::string level );
		static const int		numInputLevel = 4;
		std::string levelInput[numInputLevel];
		
	private:
		void	debug ( void );
		void	info ( void );
		void	warning ( void );
		void	error ( void );
};

#endif
