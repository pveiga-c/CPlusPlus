/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:13:54 by correia           #+#    #+#             */
/*   Updated: 2024/06/12 19:11:49 by pveiga-c         ###   ########.fr       */
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
		std::list<int> _rightList;
		std::list<int> _leftList;
		
		clock_t _listStart;
		clock_t _listEnd;
		
		std::deque<int> _deque;
		std::deque<int> _finalDeque;
		std::deque<int> _rightDeque;
		std::deque<int> _leftDeque;
	
		clock_t _dequeStart;
		clock_t _dequeEnd;

	public:
		PmergeMe();
		PmergeMe(char **input);
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);
		
	class NegativeNumberException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			//return("Negative Numbers");
			return("Error");
		}
	};
	
	class OverflowException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Overflow Number");
		}
	};

	class BadInputException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Wrong input");
		}
	};

	class DuplicateNumbersException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Duplicate Numbers");
		}
	};

	class IsSortedException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("The numbers are already sorted");
		}
	};
	
	
	void FordJohnson();
	
	void sortDeque();
	void splitDeque();
	void orderRightLeftDeque();
	int  isSortDeque(std::deque<int> deque);
	void printDeque(std::deque<int> deque);
	void addDeque(int num);
	 
	void sortList();
	void splitList();
	void orderRightLeftList();
	int  isSortList(std::list<int> list);
	void printList(std::list<int> list);
	void  addList(int num);
	
};

#endif