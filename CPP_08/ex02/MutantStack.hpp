/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:34:03 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 10:01:48 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <stack>
#include <string>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			
		};
		MutantStack(const MutantStack& copy)
		{
			*this = copy;
		};
		MutantStack& operator=(const MutantStack& copy)
		{
			this->c = copy.c;
			return (*this);
		};
		~MutantStack()
		{

		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}
		
};

#endif