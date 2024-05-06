/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:22 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 18:02:03 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Animal.hpp"

class Cat: public Animal{		
    public:
		Cat();
		Cat( std::string );
		Cat( const Cat& );
		Cat	&operator=(const Cat &other);
		void	makeSound() const;
		~Cat();
};