/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:23:45 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 17:26:42 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Serialization{
    private:
				
    public:
		Serialization();
		Serialization( const Serialization& );
		Serialization	&operator=(const Serialization &other);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
        ~Serialization();
};
