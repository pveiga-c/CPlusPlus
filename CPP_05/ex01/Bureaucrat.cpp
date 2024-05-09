/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:36 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 16:26:47 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(" ")
{
	//std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	//std::cout << "Bureaucrat constructor called" << std::endl;
	if(grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}
Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	//std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	if(this != &copy)
		this->_grade = copy._grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low");
}
std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade(int grade)
{
	if(_grade - grade < 1)
		throw GradeTooHighException();
	this->_grade -= grade;
}

void Bureaucrat::decrementGrade(int grade)
{
	if(_grade + grade > 150)
		throw GradeTooLowException();
	this->_grade += grade;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return output;
}
	
void Bureaucrat::signForm(Form& form) const
{
	if(_grade <= form.getGradeRequired())
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << getName() << " couldn’t sign " << form.getName() << " because the grade is too low." << std::endl;
	}
}


