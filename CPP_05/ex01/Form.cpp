/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 09:54:41 by correia           #+#    #+#             */
/*   Updated: 2024/05/02 10:13:16 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(" "), _sign(false), _signedGrade(1), _executedGrade(1)
{
	
};
Form::Form(std::string name, bool sing, int signedGrade, int executedGrade)
: _name(name), _sign(sing), _signedGrade(signedGrade), _executedGrade(executedGrade)
{
	
};
Form::Form(const Form& copy)
{

};
Form& Form::operator=(const Form& copy)
{
	
};