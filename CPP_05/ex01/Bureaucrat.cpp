/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:36 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/02 09:44:09 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(" ")
{
	//std::cout << "Bureaucrat default constructor called" << std::endl;
};
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	//std::cout << "Bureaucrat constructor called" << std::endl;
	if(grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if(grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		_grade = grade;
	
};
Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor called" << std::endl;
	
};
Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	//std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	if(this != &copy)
		this->_grade = copy._grade;
	return (*this);
};

const char *Bureaucrat::GradeTooHighException()
{
	const char *exception = "Grade too high";
	return (exception);
};
const char *Bureaucrat::GradeTooLowException()
{
	const char *exception = "Grade too low";
	return (exception);
};
int Bureaucrat::getGrade() const
{
	return (_grade);
};
std::string Bureaucrat::getName() const
{
 	return (_name);
};

void Bureaucrat::incrementGrade(int grade)
{
	if(_grade + grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade++;
};

void Bureaucrat::decrementGrade(int grade)
{
	if(_grade - grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade--;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
};


