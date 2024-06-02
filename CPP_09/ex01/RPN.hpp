/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 09:40:34 by correia           #+#    #+#             */
/*   Updated: 2024/06/02 17:47:29 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

class RPN
{
	private:
		std::vector<double> _operandStack;
		std::vector<char> _operatorStack;
		double _result; 

	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);

		void fillStack (const std::string imput);
		bool checkOperator (const char ImputOperator);
		void calculatRpn();
		void opr(const std::string imput, size_t i);
};

#endif