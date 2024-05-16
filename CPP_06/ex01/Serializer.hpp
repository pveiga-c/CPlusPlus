/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:48:39 by correia           #+#    #+#             */
/*   Updated: 2024/05/16 17:49:06 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

typedef unsigned long uintptr_t;

struct Data
{
	std::string name;
};

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer& copy);
	Serializer& operator=(const Serializer& copy);
	~Serializer();
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif