/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:45 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 18:03:02 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("defalut")
{
    std::cout << "Default constructor called" << std::endl;
}

Cat::Cat( std::string _type): Animal(_type)
{
    std::cout << "Constructor Type called" << std::endl;
}

Cat::Cat( const Cat &other )
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    Cat::makeSound() const
{
    std::cout << "MIIIIIIAAAAAAUUUUUUUUUUUUU" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called" << std::endl;
}