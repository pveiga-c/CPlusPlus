/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:12:13 by correia           #+#    #+#             */
/*   Updated: 2024/05/22 10:40:05 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <cmath>
#include "Array.hpp"
#include <iostream>

int main(void)
{
	try 
	{
		// Valid tests
		Array<int> a;
		Array<int> b(5);
		Array<char> c(11);

		// Setting values 
		for (int i = 0; i < 5; i++)
			b[i] = i;

		//Copy assignment operator
		a = b;

		for (int i = 0; i < 5; i++)
			b[i] = i * 2;

		//Printing a
		std::cout << "a -> ";
		for (int i = 0; i < 5; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
		std::cout << "===========" << std::endl;

		//Printing b
		std::cout << "b -> ";
		for (int i = 0; i < 5; i++)
			std::cout << b[i] << " ";
		std::cout << std::endl;
		std::cout << "===========" << std::endl;

		// Setting values 
		c[0] = 'H';
		c[1] = 'e';
		c[2] = 'l';
		c[3] = 'l';
		c[4] = 'o';
		c[5] = ' ';
		c[6] = 'W';
		c[7] = 'o';
		c[8] = 'r';
		c[9] = 'l';
		c[10] = 'd';
	
		//Printing c
		std::cout << "c -> ";
		for (int i = 0; i < 10; i++)
			std::cout << c[i];
		std::cout << std::endl;
		std::cout << "===========" << std::endl;

		// Invalid tests 
		std::cout << "Invalid tests -> ";
		std::cout << c[13];
		std::cout << a[-1];
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
}

/* 
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << " mirror = " << mirror[i] <<" - numbers = " << numbers[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
} */