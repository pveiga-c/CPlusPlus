/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:03 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/03/27 17:11:09 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
	
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

Fixed::Fixed(const int intNum)
{
	std::cout << "Int constructor called" << std::endl;
	this->m_fixedPoint = intNum << this->m_fractionalBits;
};

Fixed::Fixed(const float floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->m_fixedPoint = roundf(floatNum * (1 << this->m_fractionalBits));
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
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->m_fixedPoint);
};

void Fixed::setRawBits( int const raw )
{
	this->m_fixedPoint = raw;
};

float Fixed::toFloat( void ) const
{
	return (float)this->m_fixedPoint / (float)(1 << this->m_fractionalBits);
};

int Fixed::toInt( void ) const
{
	return this->m_fixedPoint >> this->m_fractionalBits;
};

