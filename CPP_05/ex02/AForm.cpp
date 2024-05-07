/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:10 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/07 17:12:29 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include.hpp"

AForm::AForm() :
 _name(" "),
 _isSigned(0),
 _gradeRequired(150),
 _gradeExecute(150)
{
}

AForm::AForm(std::string name, int gradeRequired, int gradeExecute) : 
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

AForm::~AForm()
{
}

AForm::AForm(const AForm& copy):
_name(getName()),
_gradeRequired(getGradeRequired()),
_gradeExecute(getGradeExecute())
{
	*this = copy;
}

AForm& AForm::operator=(const AForm& copy)
{
	if(this != &copy)
		_isSigned = getIsSigned();
	return(*this);
}


void AForm::GradeTooHighException()
{
	throw Exception("Grade too high");
}
void AForm::GradeTooLowException()
{
	throw Exception("Grade too low");
}
std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{	
	return (_isSigned);
}

int AForm::getGradeRequired() const
{
	return (_gradeRequired);
}

int AForm::getGradeExecute() const
{
	return (_gradeExecute);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if(bureaucrat.getGrade() <= this->getGradeRequired())
		_isSigned = 1;
}

std::ostream& operator<<(std::ostream& output, const AForm& Aform)
{
	output << Aform.getName() <<", the grade to signe is  " << Aform.getGradeRequired() << " and the grade to execute " << Aform.getGradeExecute() << std::endl;
	return(output);
}

