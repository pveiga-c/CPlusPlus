/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:54:07 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/19 17:00:01 by pveiga-c         ###   ########.fr       */
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
		
	private:
	
		static void (Harl::*functionInput[])();
		void	debug ( void );
		void	info ( void );
		void	warning ( void );
		void	error ( void );
		
		static const int		numInputLevel = 4;
		std::string levelInput[numInputLevel];
};

#endif
