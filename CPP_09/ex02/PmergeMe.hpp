/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 08:13:54 by correia           #+#    #+#             */
/*   Updated: 2024/06/03 10:29:46 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>

class PmergeMe
{
	private:

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);
		

};

#endif