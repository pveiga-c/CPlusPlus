/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:40:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/06 20:51:13 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <cstring>
#include <sstream>

class RPN
{
	private:
		std::stack<double> _mathPolish;
		int operandcouter;
		int operatorcouter;
		std::string _digitStr;
		int _digitNum;
		// double _result; 
		

	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);
		
		void mathPolish(std::string imput);

	class BadImputException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Error");
		}
	};

	double makeoperation(double firstNumber, double secundNumber, char imput);
/* 
		void fillStack (const std::string imput);
		bool checkOperator (const char ImputOperator);
		void calculatRpn();
		void opr(const std::string imput, size_t i); */

		
};

#endif