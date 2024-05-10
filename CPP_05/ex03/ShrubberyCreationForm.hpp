/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:35 by pveiga-c          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:46 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"

#define tree "\n\
           /\\\n\
          //\\\\\n\
         ///\\\\\\n\
        ////\\\\\\\\\n\
       /////\\\\\\\\\\n\
      //////\\\\\\\\\\\\\n\
     ///////\\\\\\\\\\\\\\n\
    ////////\\\\\\\\\\\\\\\\\n\
   /////////\\\\\\\\\\\\\\\\\\n\
  //////////\\\\\\\\\\\\\\\\\\\\\n\
 ///////////\\\\\\\\\\\\\\\\\\\\\\\n\
///////////\\\\\\\\\\\\\\\\\\\\\\\\\n\
          |||\n\
          |||\n\
          |||\n\
"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

		std::string getTarget() const;
		void execute() const;

};


#endif