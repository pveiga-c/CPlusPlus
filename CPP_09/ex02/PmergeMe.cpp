/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:14:53 by correia           #+#    #+#             */
/*   Updated: 2024/06/04 09:10:19 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	(void)copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& copy)
{
	(void)copy;
	return (*this);
}


PmergeMe::PmergeMe(char **imput)
{
	for (int i = 0; imput[i]; i++)
	{
		for(size_t j = 0; imput[i][j]; j++)
		{
			if(!isdigit(imput[i][j]) && imput[i][j] != '-' && imput[i][j] != '+')
				throw BadImputException();
		}
		int num = atoi(imput[i]);
		if(num < 0)
			throw NegativeNumberException();
		else if (num > 2147483647)
			throw OverflowException();

		addList(num);
		addDeque(num);
	}
}

void PmergeMe::addList(int num)
{
	if(std::find(_list.begin(), _list.end(), num) != _list.end())
		throw (DuplicateNumbersException());
	_list.push_back(num);
}

void PmergeMe::addDeque(int num)
{
	if(std::find(_deque.begin(), _deque.end(), num) != _deque.end())
		throw (DuplicateNumbersException());
	_deque.push_back(num);
}

void PmergeMe::sort ()
{
	std::cout << "Before: ";
	for(std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	sortList();
}

void PmergeMe::sortList()
{
	for(std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		int num1 = *it;
		int num2 = *(++it);
		
		*(--it);
		if(num1 < num2)
			_listPair.push_back(std::make_pair(num1, num2));
		else
			_listPair.push_back(std::make_pair(num2, num1));
	
		if (++it == _list.end())
			break;
	}
	for (std::list<std::pair<int, int> >::iterator it = _listPair.begin(); it != _listPair.end(); ++it) 
	{
		std::list<std::pair<int,int> >::iterator nextIt = ++it;
		--it;
		if(nextIt == _listPair.end())
			break; 

		if(it->first < nextIt->first)
			_finalList.push_back(it->first);
		else
			_finalList.push_back(nextIt->first);
			

		std::cout << "it->first = " << it->first <<" - it->seq = " << it->second << std::endl;
		std::cout << "nextIt->first = " << nextIt->first <<" - nextIt->seq = " << nextIt->second << std::endl;

		
		// if(it ->first < (it->first)++)*/
			
		
	}

	


	
/* 	for (std::list<std::pair<int, int> >::iterator it = _listPair.begin(); it != _listPair.end(); ++it) 
	{
 		std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
	} */
}