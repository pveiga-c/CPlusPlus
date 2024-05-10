/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:10 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:49:49 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

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
		throw GradeTooHighException();
	else if(gradeExecute > 150 || gradeRequired > 150)
		throw GradeTooLowException();
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


const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
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

std::ostream& operator<<(std::ostream& output, const AForm& Aform)
{
	output << "The name the form is " << Aform.getName() << std::endl;
	output << "The grade to signe is " << Aform.getGradeRequired() << std::endl;
	output << "The grade to execute is " << Aform.getGradeExecute() << std::endl;
	return(output);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if(bureaucrat.getGrade() <= this->getGradeRequired())
		_isSigned = 1;
	else
		throw GradeTooLowException();
}

void	AForm::checkRequirements(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == 0)
		throw FormNotSignedException();
	if (executor.getGrade() <= _gradeExecute)
		this->execute();
	else
		throw GradeTooLowException();
		
	
}


