/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:39:38 by correia           #+#    #+#             */
/*   Updated: 2024/05/16 17:28:19 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}
ScalarConverter::~ScalarConverter()
{
	
}
ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return (*this);
}

int getType(std::string str)
{
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "inff" || str == "+inff" ||  str == "-inff" || str == "nan" || str == "nanf")
		return INF;
	if(str.length() == 1 && !isdigit(str[0]))
		return CHAR;
	if(std::count(str.begin(), str.end(), '.') > 1)
		return INVALID;
	if(std::count(str.begin(), str.end(), 'f') > 1)
		return INVALID;
	if((std::count(str.begin(), str.end(), '.') + std::count(str.begin(), str.end(), 'f')) > 2)
		return INVALID;
	if((std::count(str.begin(), str.end(), '+') + std::count(str.begin(), str.end(), '-')) > 1)
		return INVALID;
	
	int dotFlag = 0;
	int floatFlag = 0;
	
	for(size_t i = 0; i < (str.length()); i++)
	{
		if(!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-' && str[i] != '+')
			return INVALID;
		if(str[i] == '.' && !str[i + 1])
			return INVALID;
		else if(str[i] == '.')
			dotFlag = 1;
		else if(str[i] == 'f')
		{	
			if((str.length() - 1) == i)
				floatFlag = 1;
			else 
				floatFlag = 2;
		}
	}
	if(floatFlag == 2)
		return (INVALID);
	if(dotFlag == 0 && floatFlag == 0)
		return (INT);
	if(dotFlag == 1 && floatFlag == 0)
		return (DOUBLE);
	return (FLOAT);
}

void print(double num)
{
	std::cout << "char: ";
	if(num < 0 || num > 125)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(num) && !std::isnan(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
		
	std::cout << "int: ";
	if((num > INT_MAX || num < INT_MIN) && !std::isnan(num))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	
	std::cout << "float: ";
	if (num > FLT_MAX || num < FLT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << static_cast<float>(num) << "f" << std::endl;

	std::cout << "double: ";
	if (num == INFINITY || num == -INFINITY)
		std::cout << "impossible" << std::endl;
	else
		std::cout << num << std::endl;
	
}

void printInf(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff") {
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if(str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (str == "nan" || str == "nanf") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

void ScalarConverter::convert(std::string str)
{
	int eType = getType(str);
	if(eType == INT)
	{
		std::cout << " Type is INT" << std::endl;
		long num = atol(str.c_str());
		if(num > INT_MAX || num < INT_MIN)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		else
			print(atof(str.c_str()));
	}
	else if(eType == CHAR)
	{
		std::cout << " Type is CHAR" << std::endl;
		print(str[0]);
	}
	else if(eType == FLOAT)
	{
		std::cout << " Type is FLOAT" << std::endl;
		
		print(atof(str.c_str()));
	}
	else if(eType == DOUBLE)
	{
		std::cout << " Type is DOUBLE" << std::endl;
		print(atof(str.c_str()));
	}
	else if (eType == INF)
	{
		std::cout << " Type is INF" << std::endl;
		printInf(str);
	}
	else if(eType == INVALID)
		std::cout << "Imput Invalido" << std::endl;

}