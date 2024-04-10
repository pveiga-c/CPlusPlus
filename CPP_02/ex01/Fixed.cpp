/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:03 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/10 18:27:31 by pveiga-c         ###   ########.fr       */
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
	this->_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
};

Fixed::Fixed(const int intNum):_fixedPoint(intNum << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float floatNum):_fixedPoint(roundf(floatNum * (1 << this->_fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
};

Fixed& Fixed::operator=( const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = copy.getRawBits();
	return(*this);
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
};

void Fixed::setRawBits( int const raw )
{
	this->_fixedPoint = raw;
};

float Fixed::toFloat( void ) const
{
	return (float)this->_fixedPoint / (float)(1 << this->_fractionalBits);
};

int Fixed::toInt( void ) const
{
	return this->_fixedPoint >> this->_fractionalBits;
};

