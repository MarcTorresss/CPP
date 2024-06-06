/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:23:45 by martorre          #+#    #+#             */
/*   Updated: 2024/06/06 13:12:56 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>

struct Data
{
	int	value;
};

class Serialization{
    private:
		Serialization();
		Serialization( const Serialization& );
		Serialization	&operator=(const Serialization &other);
		~Serialization();
				
    public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
