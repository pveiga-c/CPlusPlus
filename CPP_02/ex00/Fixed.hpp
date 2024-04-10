/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:21 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/09 18:54:43 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
	private:
		int _fixedPoint;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=( const Fixed &copy);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
};

#endif