/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:13:54 by correia           #+#    #+#             */
/*   Updated: 2024/06/06 10:18:37 by correia          ###   ########.fr       */
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
		
		std::deque<int> _deque;
		std::deque<int> _finalDeque;
		std::deque<int> _rightDeque;
		std::deque<int> _leftDeque;
	
		

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
	int	 isSortList(std::list<int> list);
	void printList(std::list<int> list);
	void  addList(int num);
	
};

#endif