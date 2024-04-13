/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:28:16 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/13 16:16:40 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
	Point();
	~Point();
	Point(const float p1, const float p2);
	Point(const Point& copy);
	Point& operator=( const Point &copy);
	Fixed getX() const;
	Fixed getY() const;
};



#endif