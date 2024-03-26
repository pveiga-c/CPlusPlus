/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:03 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/26 09:25:37 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed()
	{
		this->m_fixedPoint = 0;
		std::cout << "Default constructor called" << std::endl;
	};
	
	Fixed::Fixed(const Fixed& copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	};
	
	Fixed& Fixed::operator=( const Fixed &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->m_fixedPoint = copy.getRawBits();
		return(*this);
	};
	
	Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	};
	
	int Fixed::getRawBits( void ) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->m_fixedPoint);
	};
	
	void Fixed::setRawBits( int const raw )
	{
		this->m_fixedPoint = raw;
	};

