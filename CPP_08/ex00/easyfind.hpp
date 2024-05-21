/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:21:52 by correia           #+#    #+#             */
/*   Updated: 2024/05/21 09:51:47 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	if(it == container.end())
		return (container.end());
	return (it);
}

#endif