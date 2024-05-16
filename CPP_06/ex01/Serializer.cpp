/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveiga-c <pveiga-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:52:22 by correia           #+#    #+#             */
/*   Updated: 2024/05/16 16:45:24 by pveiga-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer& copy)
{
	*this = copy;
}

Serializer& Serializer::operator=(const Serializer& copy)
{
	(void)copy;
	return *this;
}

Serializer::~Serializer()
{
	
}

// Pega um ponteiro e o converte para o tipo inteiro sem sinal uintptr_t.
uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(&(*ptr));
}
// Pega um parâmetro inteiro sem sinal e o converte em um ponteiro para Data.
Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}