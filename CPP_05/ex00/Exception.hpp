/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:53:00 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/06 17:09:17 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "Include.hpp"


class Exception : public std::exception
{
	private:
		std::string _errorMsg;
		
	public:
		Exception(std::string msg);
		virtual const char* what() const throw();
		virtual ~Exception() throw();
};

#endif