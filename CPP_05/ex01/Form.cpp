/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:52:23 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/06 19:14:56 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include.hpp"

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
		GradeTooHighException();
	else if(gradeExecute > 150 || gradeRequired > 150)
		GradeTooLowException();
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


void Form::GradeTooHighException()
{
	throw Exception("Grade too high");
}
void Form::GradeTooLowException()
{
	throw Exception("Grade too low");
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

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if(bureaucrat.getGrade() >= this->getGradeRequired());
		_isSigned = 1;
}

std::ostream& operator<<(std::ostream& output, const Form& form)
{
	output << form.getName() <<", Form and the grade to signe is  " << form.getGradeRequired() << " and grade to execute " << form.getGradeExecute() << std::endl;
	return(output);
}

