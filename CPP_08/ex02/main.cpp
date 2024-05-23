/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/23 10:37:37 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <time.h>
#include <cstdlib>


int main()
{
	{	
		std::cout << "*****MUTANTSTACK*****" << std::endl;
		
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "start list" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	{
		std::cout << "********LIST********" << std::endl;

		std::list<int> mstackList;

		mstackList.push_back(5);
		mstackList.push_back(17);

		std::cout << mstackList.back() << std::endl;

		mstackList.pop_back();

		std::cout << mstackList.size() << std::endl;

		mstackList.push_back(3);
		mstackList.push_back(5);
		mstackList.push_back(737);
		//[...]
		mstackList.push_back(0);

		std::list<int>::iterator it = mstackList.begin();
		std::list<int>::iterator ite = mstackList.end();

		/* ++it;
		--ite; */
		std::cout << "start list" << std::endl;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstackList);
	}
		std::cout << std::endl << "********MY TESTES********" << std::endl << std::endl;
	{
		
		MutantStack<int> mstack;
		srand(time(NULL));
		for(int i; i < 15; i++)
		{
			const int value = rand() % 101;
			mstack.push(value);
		}
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		
		std::cout << std::endl << "First element of the MutantStack = " << *it << std::endl;
		
		std::cout << std::endl;
		
		std::cout << "Size of the Mutantstack = " << mstack.size() << std::endl;
		std::cout << std::endl;
		
		std::cout << "start list" << std::endl;
 		int i = 1;
		while (it != ite)
		{
			std::cout << i << " = " << *it << std::endl;
			++it;
			++i;
		}
		mstack.pop();
		mstack.pop();
		
		std::cout << std::endl;
		
		std::cout << "Size of the Mutantstack = " << mstack.size() << std::endl;
		std::cout << std::endl;
		
		it = mstack.begin();
		ite = mstack.end();
		std::cout << std::endl;

		std::cout << "start list" << std::endl;
 		i = 1;
		while (it != ite)
		{
			std::cout << i << " = " << *it << std::endl;
			++it;
			++i;
		}
	}
	return 0;
}

	
