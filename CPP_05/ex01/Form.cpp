/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:52:23 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 16:31:49 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
 _name(" "),
 _isSigned(0),
 _gradeRequired(150),
 _gradeExecute(150)
{
}

Form::Form(std::string name, int gradeRequired, int gradeExecute) : 
_name(name),
_isSigned(0),
_gradeRequired(gradeRequired),
_gradeExecute(gradeExecute) 
{
	if(gradeExecute < 1 || gradeRequired < 1)
		throw GradeTooHighException();
	else if(gradeExecute > 150 || gradeRequired > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form& copy):
_name(getName()),
_gradeRequired(getGradeRequired()),
_gradeExecute(getGradeExecute())
{
	*this = copy;
}

Form& Form::operator=(const Form& copy)
{
	if(this != &copy)
		_isSigned = getIsSigned();
	return(*this);
}


const char *Form::GradeTooHighException::what() const throw()
{
	return("Grade too high");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low");
}
std::string Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{	
	return (_isSigned);
}

int Form::getGradeRequired() const
{
	return (_gradeRequired);
}

int Form::getGradeExecute() const
{
	return (_gradeExecute);
}

std::ostream& operator<<(std::ostream& output, const Form& form)
{
	output << "The name is " << form.getName() << std::endl;
	output << "The grade to signe is " << form.getGradeRequired() << std::endl;
	output << "The grade to execute is " << form.getGradeExecute() << std::endl;
	return(output);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if(bureaucrat.getGrade() <= this->getGradeRequired())
		_isSigned = 1;
	else
		throw GradeTooLowException();
}
