/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:13:54 by correia           #+#    #+#             */
/*   Updated: 2024/06/03 19:51:38 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <limits>
#include <list>
#include <deque>
#include <iterator>


class PmergeMe
{
	private:
		std::list<int> _list;
		std::list<int> _finalList;
		std::deque<int> _deque;
		std::list<std::pair<int, int> > _listPair;

	public:
		PmergeMe();
		PmergeMe(char **imput);
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);
		
	class NegativeNumberException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return("Negative Numbers");
		}
	};
	
	class OverflowException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return("Overflow Number");
		}
	};

	class BadImputException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return("Wrong Imput");
		}
	};

	class DuplicateNumbersException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return("Duplicate Numbers");
		}
	};
	
	void addList(int num);
	void addDeque(int num);
	void sort();
	void sortList();
	
};

#endif