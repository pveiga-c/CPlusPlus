/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:12 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 09:45:49 by correia          ###   ########.fr       */
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
		
		Span();

	public:
		Span(unsigned int num);
		Span(const Span& copy);
		Span& operator=(const Span& copy);
		~Span();
	
		void addNumber(int number);
		void addNumbers(const std::vector<int>& array);
		
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end);
		
		int shortestSpan() const;
		int longestSpan() const;
		
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
		
		
};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end)
{
    if (_vector.size() + std::distance(begin, end) > _num)
        throw SpanIsFullException();
    _vector.insert(_vector.end(), begin, end);
}

#endif