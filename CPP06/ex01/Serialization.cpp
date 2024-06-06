/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:26:44 by martorre          #+#    #+#             */
/*   Updated: 2024/06/06 13:27:01 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{

}

Serialization::Serialization( const Serialization &other )
{
    *this = other;
}

Serialization& Serialization::operator=(const Serialization &other)
{
    if (this == &other)
        return (*this);
    return (*this);
}

Serialization::~Serialization()
{

}

uintptr_t Serialization::serialize(Data* ptr)
{
    return reinterpret_cast <uintptr_t> (ptr);
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return reinterpret_cast <Data *> (raw);
}

