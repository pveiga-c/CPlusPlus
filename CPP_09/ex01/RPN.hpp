/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:40:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 18:55:00 by pveiga-c         ###   ########.fr       */
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
		std::string _digitStr;
		int _operatorcouter;
		int _operandcouter;
		int _digitNum;

	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);
		
		void mathPolish(std::string input);
		void checkError(std::string input);

	class BadInputException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Error\n");
		}
	};

	double makeoperation(double firstNumber, double secundNumber, char input);
	
};

#endif