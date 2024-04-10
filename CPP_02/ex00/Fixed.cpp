/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:03 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/10 17:26:39 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed()
	{
		std::cout << "Default constructor called" << std::endl;
		this->_fixedPoint = 0;
	};
	
	Fixed::Fixed(const Fixed& copy)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
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
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_fixedPoint);
	};
	
	void Fixed::setRawBits( int const raw )
	{
		this->_fixedPoint = raw;
	};

