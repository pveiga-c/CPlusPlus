/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:28:05 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/13 16:16:35 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	
}
Point::~Point()
{
	
}

Point::Point(const float p1, const float p2) : _x(p1), _y(p2)
{
	
}

Point::Point(const Point& copy) : _x(copy.getX()), _y(copy.getY())
{
	
}

Point& Point::operator=( const Point &copy)
{
	(void)copy;
	return(*this);
}

Fixed Point::getX() const {
	return (_x);
}

Fixed Point::getY() const {
	return (_y);
}