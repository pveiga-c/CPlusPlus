/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:28:05 by correia           #+#    #+#             */
/*   Updated: 2024/04/12 10:14:45 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	
}
Point::~Point()
{
	
}

Point::Point(const float p1, const float p2) : x(p1), y(p2)
{
	
}

Point::Point(const Point& copy)
{
	(void)copy;
	*this = copy;
}

Point& Point::operator=( const Point &copy)
{
	(void)copy;

	// std::cout << "Copy assignment operator called" << std::endl;
	return(*this);
}

Fixed Point::getX() const {
	return (x);
}

Fixed Point::getY() const {
	return (y);
}