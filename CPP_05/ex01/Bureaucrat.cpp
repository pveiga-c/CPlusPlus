/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:55:36 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/06 19:28:56 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include.hpp"

Bureaucrat::Bureaucrat() : _name(" ")
{
	//std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	//std::cout << "Bureaucrat constructor called" << std::endl;
	if(grade < 1)
		GradeTooHighException();
	else if(grade > 150)
		GradeTooLowException();
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

void Bureaucrat::GradeTooHighException()
{
	throw Exception("Grade too high");
}
void Bureaucrat::GradeTooLowException()
{
	throw Exception("Grade too low");
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
		GradeTooHighException();
	this->_grade -= grade;
}

void Bureaucrat::decrementGrade(int grade)
{
	if(_grade + grade > 150)
		GradeTooLowException();
	this->_grade += grade;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}
	
void Bureaucrat::signForm(const Form& form) const
{
	if(form.getIsSigned() == 1)
		std::cout << getName() << " signed " << form.getName() << std::endl;
	else if(getGrade() < form.getGradeExecute())
		std::cout << getName() << "couldn't sign" << form.getName() << " because " << getGrade() << std::endl;
	else if(getGrade() < form.getGradeRequired())
		std::cout << getName() << "couldn't sign" << form.getName() << " because " << getGrade() << std::endl;
}


