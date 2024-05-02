/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 09:55:00 by correia           #+#    #+#             */
/*   Updated: 2024/05/02 10:10:06 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Form
{
	private:
		const std::string _name;
		bool _sign;
		const int _signedGrade;
		const int _executedGrade;
		
	public:
		Form();
		Form(std::string name, bool sing, int signedGrade, int executedGrade);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
	
};