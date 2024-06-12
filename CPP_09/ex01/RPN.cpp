/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:43:04 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 18:54:52 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): _operandcouter(0), _operatorcouter(0)
{
	
}
RPN::~RPN()
{

}

RPN::RPN(const RPN& copy)
{
	(void)copy;
}

RPN& RPN::operator=(const RPN& copy)
{
	(void)copy;
	return (*this);
}

void RPN::mathPolish(std::string input)
{
	//std::cout << input <<std::endl;
	int i = 0;
	
	checkError(input);
	
	while(input[i])
	{
		if(isdigit(input[i]))
		{
			_digitStr = input.substr(i, 1);
			std::stringstream value(_digitStr);
			value >> _digitNum;
			if(_digitNum < 0 || _digitNum > 10)
				throw BadInputException();
			_mathPolish.push(_digitNum);
		}
		else if (std::strchr("+-*/", input[i]))
		{
			if(_mathPolish.size() < 2)
				throw BadInputException();

			double secundNumber = _mathPolish.top();
			_mathPolish.pop();
			double firstNumber = _mathPolish.top();
			_mathPolish.pop();
			
			double result = makeoperation(firstNumber, secundNumber, input[i]);
			_mathPolish.push(result);
		}
		i++;
	}
	if(_mathPolish.size() != 1)
		throw BadInputException();
	std::cout << _mathPolish.top() << std::endl;
}

void RPN::checkError(std::string input)
{
	int i = 0;
	
	while(input[i])
	{
		if(isdigit(input[i]))
		{
			++_operandcouter;
		}
		else if (std::strchr("+-*/", input[i]))
		{
			++_operatorcouter;
		}
		else if (input[i] != ' ')
		{
			throw BadInputException();
		}
		i++;
	}
	if(_operandcouter != _operatorcouter + 1)
		throw BadInputException();
		
}

double RPN::makeoperation(double firstNumber, double secundNumber, char input)
{
	double result;
	
	switch (input)
	{
	case '+':
		result = firstNumber + secundNumber;
		break;
	case '-':
		result = firstNumber - secundNumber;
		break;
	case '*':
		result = firstNumber * secundNumber;
		break;
	case '/':
		if(secundNumber != 0)
			result = firstNumber / secundNumber;
		else
			throw BadInputException();
		break;
	}
	return(result);
}

