/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:08 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 09:47:07 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int num)
{
	_num = num;
}
Span::Span(const Span& copy)
{
	*this = copy;
}
Span& Span::operator=(const Span& copy)
{
	if(this != &copy)
	{
		this->_num = copy._num;
		this->_vector = copy._vector;
	}
	return(*this);
}

Span::~Span()
{
	
}

void Span::addNumber(int number)
{
	if(_vector.size() >= _num)
		throw Span::SpanIsFullException();
	_vector.push_back(number);
}

void Span::addNumbers(const std::vector<int>& array)
{
	if (_vector.size() + array.size() > _num)
		throw SpanIsFullException();
	_vector.insert(_vector.end(), array.begin(), array.end());
}

int Span::shortestSpan() const
{
	if(_vector.size() < 2)
		throw noSpanFoundException();
	
	std::vector<int> sorted = _vector;
	std::sort(sorted.begin(), sorted.end());
	
	int minSpan = std::numeric_limits<int>::max();
	
	for (size_t i = 1; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
		{
			minSpan = span;
		}
	}
	return(minSpan);
}

int Span::longestSpan() const
{
	if(_vector.size() < 2)
		throw noSpanFoundException();

	int minElem = *std::min_element(_vector.begin(), _vector.end());
	int maxElem = *std::max_element(_vector.begin(), _vector.end());

	return maxElem - minElem;

}
