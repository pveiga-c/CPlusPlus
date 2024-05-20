/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 09:50:00 by correia           #+#    #+#             */
/*   Updated: 2024/05/20 09:58:15 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream> 
#include <stdexcept>

template<typename T>
class Array
{
	private:
		T *_arr;
		int _arrLenght;
		
	public:
		Array()
		{
			_arr = new T;
			_arrLenght = 0;
		}
		
		Array(unsigned int n)
		{
			_arr = new T;
			_arrLenght = n;
		}
		
		Array( const Array& copy)
		{
			this->_arrLenght = copy.getSize();
			this->_arr = new T[getSize()];
			for(unsigned int i = 0; i < getSize(); i++)
				this->_arr[i] = copy._arr[i];
		}
		
		Array& operator=( const Array& copy)
		{
			if(this != &copy)
				if(this->_arr)
					delete[] _arr;
			this->_arrLenght = copy.getSize();
			this->_arr = new T[getSize()];
			for(unsigned int i = 0; i < getSize(); i++)
				this->_arr[i] = copy._arr[i];
			return (*this);
		}
		
		~Array()
		{
			delete[] this->_arr;
		}

		T& operator[](unsigned int index) 
		{
			if(index >= getSize())
				throw Array::OutOfRangeException();
			return(_arr[index]);
		}
		
		unsigned int	getSize() const
		{
			return (this->_arrLenght);
		}

		class OutOfRangeException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return("Out of range.");
				}
		};
		
	
};

#endif