/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:13:26 by correia           #+#    #+#             */
/*   Updated: 2024/05/18 09:31:39 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* array, unsigned int length, void(*fun)(T&))
{
	for (unsigned int i = 0; i < length; i++)
		fun(array[i]);
}
#endif