/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:29 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:46 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTEFORM_HPP
#define ROBOTOMYREQUESTEFORM_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

		std::string getTarget() const;

		void execute() const;
	
};

#endif