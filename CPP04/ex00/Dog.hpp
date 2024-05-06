/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:22 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 18:02:27 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Animal.hpp"

class Dog: public Animal{		
    public:
		Dog();
		Dog( std::string );
		Dog( const Dog& );
		Dog	&operator=(const Dog &other);
		void    makeSound() const;
		~Dog();
};