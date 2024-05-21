/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:08 by correia           #+#    #+#             */
/*   Updated: 2024/05/21 18:39:17 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int num)
{
	_num = num;
	_fill = 0;
	// Cria um vetor de inteiros e inicializa com 0 
	std::vector<int> vector(_num, 0);
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
		this->_fill = copy._fill;
	}
	return(*this);
}

Span::~Span()
{
	
}

void Span::addNumber(int number)
{
	if(_fill < _num)
	{
		_vector.push_back(number);
		_fill++;
	}
	else
		throw Span::SpanIsFullException();
}

int Span::shortestSpan()
{
	if(_vector.size() < 2)
		throw Span::noSpanFoundException();
	
	std::sort(_vector.begin(), _vector.end());
	std::vector<int> diff(_vector.size());
	std::adjacent_difference(_vector.begin(), _vector.end(), diff.begin());
	
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < diff.size(); ++i)
	{
		diff[i] = abs(diff[i]);
		if (diff[i] < minSpan)
		{
			minSpan = diff[i];
		}
	}
	return(minSpan);
}

int Span::longestSpan()
{
	if(_vector.size() < 2)
		throw noSpanFoundException();
	std::sort(_vector.begin(), _vector.end());
	std::vector<int> diff(_vector.size());
	std::adjacent_difference(_vector.begin(), _vector.end(), diff.begin());

	int maxSpan = std::numeric_limits<int>::min();
	for(size_t i = 1; i < diff.size(); ++i)
	{
		diff[i] = abs(diff[i]);
		if(diff[i] > maxSpan)
		{
			maxSpan = diff[i];
		}
	}
	return(maxSpan);
}

void Span::addNumbers(std::vector<int> array)
{
	if ( _vector.size() + array.size() > _num )
		throw Span::SpanIsFullException ();
  	_vector.insert(_vector.end(), array.begin(), array.end());
};
