/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: correia <correia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 08:38:57 by correia           #+#    #+#             */
/*   Updated: 2024/05/14 17:03:49 by correia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	
	data.name = "Pedro";
	Data* data_ptr;
	uintptr_t uint_ptr;

	data_ptr = &data;
	uint_ptr = Serializer::serialize(data_ptr);
	data_ptr = Serializer::deserialize(uint_ptr);

	
	std::cout << data_ptr->name << std::endl;
}