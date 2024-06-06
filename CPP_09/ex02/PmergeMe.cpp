/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:14:53 by correia           #+#    #+#             */
/*   Updated: 2024/06/06 10:20:40 by correia          ###   ########.fr       */
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

void PmergeMe::FordJohnson()
{

	std::cout << "Before: ";
	printList(_list);
	
	sortList();
	std::cout << "After : ";
	printList(_finalList);

	std::cout << "*********************" << std::endl;
	std::cout << "Before: ";
	printDeque(_deque);
	sortDeque();
	std::cout << "After : ";
	printDeque(_finalDeque);
	
}
void PmergeMe::sortDeque()
{
	splitDeque();
	
	orderRightLeftDeque();
	
	
	std::deque<int>::iterator itRightDeque = _rightDeque.begin();
	std::deque<int>::iterator itLeftDeque = _leftDeque.begin();
	
	while(1)
	{
		if(_rightDeque.empty())
		{
			while(!_leftDeque.empty())
			{
				_finalDeque.push_back(*itLeftDeque);
				++itLeftDeque;
				_leftDeque.pop_front();
			}
			break;
		}
		else if(_leftDeque.empty())
		{
			while(!_rightDeque.empty())
			{
				_finalDeque.push_back(*itRightDeque);
				++itRightDeque;
				_rightDeque.pop_front();
			}
			break;
		}
		else if(*itRightDeque < *itLeftDeque)
		{
			_finalDeque.push_back(*itRightDeque);
			++itRightDeque;
			_rightDeque.pop_front();
		}
		else if(*itLeftDeque < *itRightDeque)
		{
			_finalDeque.push_back(*itLeftDeque);
			++itLeftDeque;
			_leftDeque.pop_front();
		}
	}
}

void PmergeMe::splitDeque()
{
	size_t size = _deque.size();
	size_t halfSize = size / 2;
	std::deque<int>::iterator itDeque = _deque.begin();

	for (size_t i = 0; i < halfSize; ++i)
	{
		_leftDeque.push_back(*itDeque);
		++itDeque;
	}

	for (size_t i = halfSize; i < size; ++i)
	{
		_rightDeque.push_back(*itDeque);
		++itDeque;
	}
	_deque.clear();
}

void PmergeMe::orderRightLeftDeque()
{
	while(!isSortDeque(_leftDeque))
	{
		std::deque<int>::iterator itLeftDeque = _leftDeque.begin();
		std::deque<int>::iterator nextItLeftDeque = _leftDeque.begin();
		++nextItLeftDeque;
		
		while(nextItLeftDeque != _leftDeque.end())
		{
			if(*nextItLeftDeque < *itLeftDeque)
				std::iter_swap(itLeftDeque, nextItLeftDeque);
			++itLeftDeque;
			++nextItLeftDeque;
		}
	}
	while(!isSortDeque(_rightDeque))
	{
		std::deque<int>::iterator itRightDeque = _rightDeque.begin();
		std::deque<int>::iterator nextItRightDeque = _rightDeque.begin();
		++nextItRightDeque;
		
		while(nextItRightDeque != _rightDeque.end())
		{
			if(*nextItRightDeque < *itRightDeque)
				std::iter_swap(itRightDeque, nextItRightDeque);
			++itRightDeque;
			++nextItRightDeque;
		}
	}
}

int PmergeMe::isSortDeque(std::deque<int> deque)
{
	std::deque<int>::iterator it = deque.begin();
	std::deque<int>::iterator nextIt = deque.begin();
	++nextIt;
	
	while(nextIt != deque.end())
	{
		if(*it > *nextIt)
			return(0);
		++it;
		++nextIt;
	}
	return (1);
}
void PmergeMe::printDeque(std::deque<int> deque)
{
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it) 
	{
 		std::cout  << *it << " ";
	}
	std::cout << std::endl;
}


void PmergeMe::sortList()
{

	splitList();

	orderRightLeftList();
	
	std::list<int>::iterator itRightList = _rightList.begin();
	std::list<int>::iterator itLeftList = _leftList.begin();
	
	while(1)
	{
		if(_rightList.empty())
		{
			while(!_leftList.empty())
			{
				_finalList.push_back(*itLeftList);
				++itLeftList;
				_leftList.pop_front();
			}
			break;
		}
		else if(_leftList.empty())
		{
			while(!_rightList.empty())
			{
				_finalList.push_back(*itRightList);
				++itRightList;
				_rightList.pop_front();
			}
			break;
		}
		else if(*itRightList < *itLeftList)
		{
			_finalList.push_back(*itRightList);
			++itRightList;
			_rightList.pop_front();
		}
		else if(*itLeftList < *itRightList)
		{
			_finalList.push_back(*itLeftList);
			++itLeftList;
			_leftList.pop_front();
		}
		
	}
}

void PmergeMe::splitList()
{
	size_t i = 0;
	size_t size = _list.size();
	std::list<int>::iterator itList = _list.begin();

	while(itList != _list.end())
	{
		while(i < size / 2)
		{
			_leftList.push_back(*itList);
			++itList;
			_list.pop_front();
			i++;
		}
		while(i != size)
		{
			_rightList.push_back(*itList);
			++itList;
			_list.pop_front();
			i++;
		}
		++itList;
	}
}
void PmergeMe::orderRightLeftList()
{
	while(!isSortList(_leftList))
	{
		std::list<int>::iterator itLeftList = _leftList.begin();
		std::list<int>::iterator nextItLeftList = _leftList.begin();
		++nextItLeftList;
		
		while(nextItLeftList != _leftList.end())
		{
			if(*nextItLeftList < *itLeftList)
				std::iter_swap(itLeftList, nextItLeftList);
			++itLeftList;
			++nextItLeftList;
		}
	}
	while(!isSortList(_rightList))
	{
		std::list<int>::iterator itRightList = _rightList.begin();
		std::list<int>::iterator nextItRightList = _rightList.begin();
		++nextItRightList;
		
		while(nextItRightList != _rightList.end())
		{
			if(*nextItRightList < *itRightList)
				std::iter_swap(itRightList, nextItRightList);
			++itRightList;
			++nextItRightList;
		}
	}
}

int PmergeMe::isSortList(std::list<int> list)
{
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator nextIt = list.begin();
	++nextIt;
	
	while(nextIt != list.end())
	{
		if(*it > *nextIt)
			return(0);
		++it;
		++nextIt;
	}
	return (1);
}

void PmergeMe::printList(std::list<int> list)
{
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) 
	{
 		std::cout  << *it << " ";
	}
	std::cout << std::endl;
}
 