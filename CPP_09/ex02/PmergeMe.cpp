/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:14:53 by correia           #+#    #+#             */
/*   Updated: 2024/06/05 10:35:39 by correia          ###   ########.fr       */
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
		//addDeque(num);
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
	printList();
	sortList();
}

void PmergeMe::sortList()
{

	
		/* colocar o primeiro valor no inicio da final list */

		
	std::list<int>::iterator it = _list.begin();
	
	if(_list.size() % 2 != 0)
	{	
		_finalList.begin() = _list.begin();
		it++;
		_list.pop_front();
	}
	printList();
	printFinalList();
	std::list<int>::iterator nextIt = _list.begin();
	++nextIt;
	std::cout << *it << " - " << *nextIt << std::endl;

	while(it != _list.end() && nextIt != _list.end())
	{
		if(*it < *nextIt)
			_listPair.push_back(std::make_pair(*it, *nextIt));
		else
			_listPair.push_back(std::make_pair(*nextIt, *it));
			
		std::advance(it,2);
		std::advance(nextIt,2);
	}
	
	std::list<std::pair<int,int> >::iterator pairIt = _listPair.begin();
	std::list<std::pair<int,int> >::iterator nextPairIt = _listPair.begin();
	++nextPairIt; 

	if(pairIt->first < nextPairIt->first)
	{
		_finalList.push_back(pairIt->first);
		_finalList.push_back(nextPairIt->first);
	}
	else
	{
		_finalList.push_back(nextPairIt->first);
		_finalList.push_back(pairIt->first);
	}
	if(pairIt->second < nextPairIt->second)
	{
	_finalList.push_back(pairIt->second);
		_finalList.push_back(nextPairIt->second);
	}
	else
	{
		_finalList.push_back(nextPairIt->second);
		_finalList.push_back(pairIt->second);
	}
	++nextPairIt;
	while(nextPairIt != _listPair.end())
	{
		int flag = 0;
		std::list<int>::iterator finalListIt =_finalList.begin();
		
		while(finalListIt != _finalList.end())
		{
			if(nextPairIt->first < *finalListIt)
			{
				flag = 1;
				_finalList.insert(finalListIt, nextPairIt->first);
				break;
			}
			++finalListIt;
		}
		while(finalListIt != _finalList.end())
		{
			if(nextPairIt->second < *finalListIt)
			{
				flag = 2;
				_finalList.insert(finalListIt, nextPairIt->second);
				break;
			}
			++finalListIt;
		}
		if(flag == 0)
		{
			_finalList.push_back(nextPairIt->first);
			_finalList.push_back(nextPairIt->second);
		}
		if(flag == 1)
			_finalList.push_back(nextPairIt->second);
		++nextPairIt;
	}


	printPairList();
	printFinalList();
}

int PmergeMe::isSort()
{
	std::list<int>::iterator it = _list.begin();
	std::list<int>::iterator nextIt = _list.begin();
	++nextIt;
	
	while(nextIt != _list.end())
	{
		if(*it > *nextIt)
			return(0);
		++it;
		++nextIt;
	}
	return (1);
}

void PmergeMe::printList()
{
	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it) 
	{
 		std::cout  << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

}
void PmergeMe::printFinalList()
{
	for (std::list<int>::iterator it = _finalList.begin(); it != _finalList.end(); ++it) 
	{
 		std::cout  << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

}
void PmergeMe::printPairList()
{
	for (std::list<std::pair<int, int> >::iterator it = _listPair.begin(); it != _listPair.end(); ++it) 
	{
 		std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
	} 
	std::cout << std::endl;
	std::cout << std::endl;

}