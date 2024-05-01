/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:36 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/01 14:38:42 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(" ")
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
};
Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	
};
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	
};
Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	if(this != &copy)
		this->_name = copy._name;
	return (*this);
};