/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:43:04 by correia           #+#    #+#             */
/*   Updated: 2024/06/02 18:15:42 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
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

void RPN::fillStack (const std::string imput)
{
	int i = 0;
	
	//std::cout << "imput = " << imput << std::endl;
	
	while(imput[i])
	{
		while (std::isspace(imput[i]))
			i++;
		if(std::isdigit(imput[i]))
		{
			if(std::isdigit(imput[i + 2]) && _operandStack.size() > 2)
			{
				opr(imput, i);
				i = i + 4;
			}
			else
			{
				_operandStack.push_back(strtod((imput.substr(i)).c_str(), NULL));
				if (_operandStack.back() > 9)
					throw std::exception();
			}
		}
		else if(checkOperator(imput[i]))
		{
			if(_operandStack.size() < 2)
				throw std::exception();
			_operatorStack.push_back(imput[i]);
		}
		i++;
	}
}

void RPN::opr(const std::string imput, size_t i)
{
	double n1 = strtod((imput.substr(i)).c_str(), NULL);
	double n2 = strtod((imput.substr(i + 2)).c_str(), NULL);
	
	double result;
	
	if(n1 < 9 && n2 < 9)
	{
		char op = imput[i + 4];
		
		switch (op)
		{
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = n1 / n2;
			break;
		default:
			std::cerr << "Erro: Operador desconhecido." << std::endl;
		}
	}
		_operandStack.push_back(result);
}

bool RPN::checkOperator(const char imputOperator)
{
	if(imputOperator == '+' || imputOperator == '-' || imputOperator == '*' || imputOperator == '/')
		return (true);
	return (false);
	
}

void RPN::calculatRpn()
{
	_result = *_operandStack.begin();
	
	for (size_t i = 0 ; i < _operatorStack.size(); i++)
	{
		double a = *(_operandStack.begin() + 1 + i);
		char op = *(_operatorStack.begin() + i);
		
		switch (op)
		{
		case '+':
			_result = _result + a;
			break;
		case '-':
			_result = _result - a;
			break;
		case '*':
			_result = _result * a;
			break;
		case '/':
			_result = _result / a;
			break;
		default:
			std::cerr << "Erro: Operador desconhecido." << std::endl;
		}
		
	}
	std::cout << _result << std::endl;
}


