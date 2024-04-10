/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:03 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/10 19:49:08 by pveiga-c         ###   ########.fr       */
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
	// std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
};

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
};

Fixed::Fixed(const int intNum)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = intNum << this->_fractionalBits;
};

Fixed::Fixed(const float floatNum)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(floatNum * (1 << this->_fractionalBits));
};

Fixed& Fixed::operator=( const Fixed &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = copy.getRawBits();
	return(*this);
};

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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

/*******************************************/
/* Sobrecarga dos operadores de comparação */
/*******************************************/

// Comparação: >
bool Fixed::operator>(const Fixed &other) const 
{
	return(this->_fixedPoint>other.getRawBits());
}

// Comparação: <
bool Fixed::operator<(const Fixed &other) const
{
	return(this->_fixedPoint<other.getRawBits());
}

// Comparação: >=
bool Fixed::operator>=(const Fixed &other) const
{
	return(this->_fixedPoint>=other.getRawBits());
}

// Comparação: <=
bool Fixed::operator<=(const Fixed &other) const
{
	return(this->_fixedPoint<=other.getRawBits());
}

// Comparação: ==
bool Fixed::operator==(const Fixed &other) const 
{
	return (this->_fixedPoint == other.getRawBits());
}

// Comparação: !=
bool Fixed::operator!=(const Fixed &other) const 
{
	return (this->_fixedPoint != other.getRawBits());
}

/*****************************************/
/* Sobrecarga dos operadores aritméticos */
/*****************************************/

// Adição: +
Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

// Subtração: -
Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

// Multiplicação: *
Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

// Divisão: /
Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

/******************************************************/
/* Sobrecarga dos operadores de incremento/decremento */
/******************************************************/

// Pré-incremento: ++
Fixed Fixed::operator++()
{
	this->_fixedPoint += 1;
	return *this;
}

// Pós-incremento: ++
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return temp;
}

// Pré-decremento: --
Fixed Fixed::operator--()
{
	this->_fixedPoint -= 1;
	return *this;
}

// Pós-decremento: --
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(*this);
	return temp;
}


/*******************************************************/
/* Funções estáticas para calcular o mínimo e o máximo */
/*******************************************************/

// Mínimo: para referências não constantes
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

// Mínimo: para referências constantes
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

// Máximo: para referências não constantes
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

// Máximo: para referências constantes
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}


