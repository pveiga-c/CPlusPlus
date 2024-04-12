/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:56:54 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/12 10:15:35 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bsp.hpp"
/* #include "Fixed.hpp"
#include "Point.hpp" */

int main( void ) 
{
	Point a(-5, 0);
	Point b(5, 0);
	Point c(0, 10);
	Point point(0, 11);

	if (bsp(a, b, c, point))
		std::cout << " is inside the triangle" << std::endl;
	else
		std::cout << " is not inside the triangle" << std::endl;
	return (0);
}
