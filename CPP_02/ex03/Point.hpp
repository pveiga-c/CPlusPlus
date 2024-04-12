/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:28:16 by correia           #+#    #+#             */
/*   Updated: 2024/04/12 09:57:59 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
	Point();
	~Point();
	Point(const float p1, const float p2);
	Point(const Point& copy);
	Point &operator=( const Point &copy);
	Fixed getX() const;
	Fixed getY() const;
};



#endif