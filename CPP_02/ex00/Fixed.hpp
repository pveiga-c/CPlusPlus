/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:21 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/25 16:59:03 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
private:
	int m_fixedPoint;
	static const int m_fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed &operator=( const Fixed &copy);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
};

#endif