/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:29 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/08 18:24:22 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTEFORM_HPP
#define ROBOTOMYREQUESTEFORM_HPP

#include "Include.hpp"

class RobotomyRequestform : public AForm
{
	private:
		std::string _target;
	
	public:
		RobotomyRequestform();
		RobotomyRequestform(std::string target);
		~RobotomyRequestform();
		RobotomyRequestform(const RobotomyRequestform& copy);
		RobotomyRequestform& operator=(const RobotomyRequestform& copy);

		std::string getTarget() const;

		void RobotomyRequestform::execute(Bureaucrat const & executor) const;
	
};

#endif