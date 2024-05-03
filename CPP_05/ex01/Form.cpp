/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 09:54:41 by correia           #+#    #+#             */
/*   Updated: 2024/05/02 17:41:12 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	_name(" "),
	_sign(false),
	_signedGrade(1),
	_execGrade(1)
{
	
};
Form::Form(std::string name, int signedGrade, int execGrade):
	_name(name),
	_sign(false),
	_signedGrade(signedGrade),
	_execGrade(execGrade)
{
	
};
Form::Form(const Form& copy):
	_name(copy.getname()),
	_sign(copy.getsign()),
	_signedGrade(copy.getsignedGrade()),
	_execGrade(copy.getexecGrade())
{
	
};
Form& Form::operator=(const Form& copy)
{
	if(this != &copy)
		this->_sign = copy.getsign();
	return (*this);
};

std::string Form::getname() const
{
	return (_name);
};
bool Form::getsign() const
{
	return (_sign);
};
int Form::getsignedGrade() const
{
	return (_signedGrade);
};
int Form::getexecGrade() const
{
	return (_execGrade);
};
