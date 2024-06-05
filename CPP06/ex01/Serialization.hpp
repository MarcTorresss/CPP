/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:23:45 by martorre          #+#    #+#             */
/*   Updated: 2024/06/05 17:34:33 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

struct Data
{
	int	address;
};

class Serialization{
    private:
		Serialization();
		Serialization( const Serialization& );
		Serialization	&operator=(const Serialization &other);
		ClassBaseClassBase;
				
    public:
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};
