/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:38:57 by correia           #+#    #+#             */
/*   Updated: 2024/05/16 17:59:32 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data* data = new Data;
	uintptr_t uintptr;
 
	std::cout << "Pointer address: " << data << std::endl;

	uintptr = Serializer::serialize(data);
	std::cout << "Uintptr value  : " << uintptr << std::endl;

	data = Serializer::deserialize(uintptr);
	std::cout << "Pointer address: " << data << std::endl;

	delete data;

	return (0);
}