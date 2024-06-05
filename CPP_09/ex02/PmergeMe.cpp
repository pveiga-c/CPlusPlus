/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:14:53 by correia           #+#    #+#             */
/*   Updated: 2024/06/05 20:42:30 by pveiga-c         ###   ########.fr       */
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

void PmergeMe::FordJohnson()
{
	
	//std::cout << "Before: ";
//	printList(_list);
	sortList();
//	std::cout << "After : ";
	//printList(_finalList);
	
}

void PmergeMe::sortList()
{

	splitList();

	orderRightLeftList();
	
	std::cout << "left list = ";
	printList(_leftList);
	std::cout <<std::endl;
	std::cout << "right list = ";
	printList(_rightList);


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
	while(!isSort(_leftList))
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
	
	/* primeiro a esquerda */
	
	while(!isSort(_rightList))
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

int PmergeMe::isSort(std::list<int> list)
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

// void PmergeMe::printPairList()
// {
// 	for (std::list<std::pair<int, int> >::iterator it = _listPair.begin(); it != _listPair.end(); ++it) 
// 	{
//  		std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
// 	} 
// 	std::cout << std::endl;
// 	std::cout << std::endl;

// }