/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:13:54 by correia           #+#    #+#             */
/*   Updated: 2024/06/05 20:42:24 by pveiga-c         ###   ########.fr       */
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
	
	void splitList();
	void orderRightLeftList();
	
	void addList(int num);
	void addDeque(int num);
	void FordJohnson();
	void sortList();
	void makePair(std::list<int>::iterator it, std::list<int>::iterator nextIt);
	int isSort(std::list<int> list);
	void orderPair(std::list<std::pair<int,int> >::iterator pairIt, std::list<std::pair<int,int> >::iterator nextPairIt);
	void printList(std::list<int> list);
	void printPairList();




	
};

#endif