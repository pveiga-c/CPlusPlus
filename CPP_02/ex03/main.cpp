/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:56:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/13 08:44:36 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bsp.hpp"

int main( void ) 
{
	Point a(-5, 1);
	Point b(5, 0);
	Point c(0, 10);
	Point point(0, 5);
	
	if (bsp(a, b, c, point))
		std::cout << "The point (" << point.getX() << ", " << point.getY() << ") is inside the triangle" << std::endl;
	else
		std::cout << "The point (" << point.getX() << ", " << point.getY() << ") is not inside the triangle" << std::endl;
	
	return (0);
}
