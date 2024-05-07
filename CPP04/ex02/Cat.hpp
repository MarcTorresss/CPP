/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:22 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 12:34:38 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{		
	private:
		Brain* brain;
    public:
		Cat();
		Cat( std::string );
		Cat( const Cat& );
		Cat	&operator=(const Cat &other);
		void	makeSound() const;
		~Cat();
};