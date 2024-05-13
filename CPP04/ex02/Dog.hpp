/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:22 by martorre          #+#    #+#             */
/*   Updated: 2024/05/13 15:28:48 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{	
	private:
		Brain* brain;	
    public:
		Dog();
		Dog( const Dog& );
		Dog	&operator=(const Dog &other);
		void    makeSound() const;
		~Dog();
};