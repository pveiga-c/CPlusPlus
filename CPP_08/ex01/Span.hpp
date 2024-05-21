/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:12 by correia           #+#    #+#             */
/*   Updated: 2024/05/21 18:29:18 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <limits>

class Span
{
	private:
		unsigned int _num;
		std::vector<int> _vector;
		unsigned int _fill;
		
		Span();

	public:
		Span(unsigned int num);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		~Span();
	
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		
		class noSpanFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("No Span found");
				}
		};
		
		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("Span is Full");
				}
		};
		
		void addNumbers(std::vector<int> array);
		
};



#endif