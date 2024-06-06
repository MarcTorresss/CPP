/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:28:31 by martorre          #+#    #+#             */
/*   Updated: 2024/06/06 15:47:15 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>

int main()
{
    Data	data;
    Data	*data_deserialize;
    uintptr_t serializer;

    data.value = 42;

    std::cout << "Value: " << data.value << std::endl;
    std::cout << "Address: " << &data << std::endl;
    
    serializer = Serialization::serialize(&data);
    std::cout << "Serialized value: " << serializer << std::endl;

    data_deserialize = Serialization::deserialize(serializer);
    std::cout << "Deserialized value: " << data_deserialize->value << std::endl;

    return 0;
}
