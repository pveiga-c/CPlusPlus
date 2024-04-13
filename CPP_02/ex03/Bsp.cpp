/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:52:26 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/13 16:15:59 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bsp.hpp"

Fixed getArea(Point const a, Point const b, Point const c) {
	Fixed Area = Fixed(0.5f) * (a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY()));
	if (Area < 0)
		Area = Area * (-1);
	return Area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea = getArea(a, b, c);
	Fixed pabArea = getArea(point, a, b);
	Fixed pacArea = getArea(point, a, c);
	Fixed pbcArea = getArea(point, b, c);
	
	if (pabArea + pacArea + pbcArea != abcArea)
		return (false);
	if (pabArea == 0 || pacArea == 0 || pbcArea == 0)
		return (false);
	return (true);
}
