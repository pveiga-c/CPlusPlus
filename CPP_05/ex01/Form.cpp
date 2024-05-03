/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 09:54:41 by correia           #+#    #+#             */
/*   Updated: 2024/05/03 16:31:46 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	_name(" "),
	_isSigned(false),
	_signedGrade(1),
	_execGrade(1)
{
	//std::cout << "Form default constructor called" << std::endl;
	
};
Form::Form(std::string name, int signedGrade, int execGrade):
	_name(name),
	_isSigned(false),
	_signedGrade(signedGrade),
	_execGrade(execGrade)
{
	//std::cout << "Form constructor called" << std::endl;
	
};
Form::Form(const Form& copy):
	_name(copy.getname()),
	_isSigned(copy.getsign()),
	_signedGrade(copy.getsignedGrade()),
	_execGrade(copy.getexecGrade())
{
	//std::cout << "Form copy constructor called" << std::endl;
	
};
Form& Form::operator=(const Form& copy)
{
	if(this != &copy)
		this->_isSigned = copy.getsign();
	return (*this);
};

std::string Form::getname() const
{
	return (_name);
};

bool Form::getsign() const
{
	return (_isSigned);
};

int Form::getsignedGrade() const
{
	return (_signedGrade);
};

int Form::getexecGrade() const
{
	return (_execGrade);
};

void Form::signForm(const Bureaucrat& parm)
{
// 	if (hamid.getGrade() >= this->getGradeToSign())
// 		m_isSignedature = 1;
};
