/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:39:49 by correia           #+#    #+#             */
/*   Updated: 2024/05/14 09:31:27 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <algorithm>
#include <climits>
#include <cfloat>
#include <cmath>

enum e_type
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
	INVALID,
	INF
};

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);

	public:
		static void convert(std::string str);
};
#endif