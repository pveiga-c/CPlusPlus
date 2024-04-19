/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:28:00 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/04/19 18:48:30 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
};
Brain::Brain(std::string name)
{
	std::cout << "Brain constructor" << std::endl;
	
};
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain default constructor" << std::endl;
	*this = copy;
};
Brain& Brain::operator=(const Brain& copy)
{
	if(this != &copy)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
};

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
	
}; 