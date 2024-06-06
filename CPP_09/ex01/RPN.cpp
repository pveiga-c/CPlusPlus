/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:43:04 by correia           #+#    #+#             */
/*   Updated: 2024/06/06 20:47:17 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(): operandcouter(0), operatorcouter(0)
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

void RPN::mathPolish(std::string imput)
{
	std::cout << imput <<std::endl;
	int i = 0;
	
	while(imput[i])
	{
		if(isdigit(imput[i]))
		{
			++operandcouter;
		}
		else if (std::strchr("+-*/", imput[i]))
		{
			++operatorcouter;
		}
		else if (imput[i] != ' ')
		{
			std::cout << "ola\n";
			throw BadImputException();
		}
		i++;
	}
	if(operandcouter != operatorcouter + 1)
		throw BadImputException();
		
	i = 0;
	while(imput[i])
	{
		if(isdigit(imput[i]))
		{
			_digitStr = imput.substr(i, 1);
			std::stringstream value(_digitStr);
			value >> _digitNum;
			if(_digitNum < 0 || _digitNum > 10)
				throw BadImputException();
			_mathPolish.push(_digitNum);
		}
		else if (std::strchr("+-*/", imput[i]))
		{
			if(_mathPolish.size() < 2)
				throw BadImputException();

			double secundNumber = _mathPolish.top();
			_mathPolish.pop();
			double firstNumber = _mathPolish.top();
			_mathPolish.pop();
			
			double result = makeoperation(firstNumber, secundNumber, imput[i]);
			_mathPolish.push(result);
		}
		i++;
	}
	if(_mathPolish.size() != 1)
		throw BadImputException();
	std::cout << _mathPolish.top() << std::endl;
}
double RPN::makeoperation(double firstNumber, double secundNumber, char imput)
{
	double result;
	
	switch (imput)
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
			throw BadImputException();
		break;
	}
	return(result);
}



/* 
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


 */