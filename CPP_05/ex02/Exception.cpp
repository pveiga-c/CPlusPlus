/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:43:12 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/07 16:43:13 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Include.hpp"

Exception::Exception(std::string msg) : _errorMsg(msg)
{
}

const char* Exception::what() const throw()
{
	return (_errorMsg.c_str());
}
Exception::~Exception() throw()
{
}
