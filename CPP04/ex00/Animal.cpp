/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:43:32 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 12:03:26 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("defalut")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string _type ): type(_type)
{
    std::cout << "Animal Constructor Type called" << std::endl;
}

Animal::Animal( const Animal &other )
{
    std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal	&Animal::operator=( const Animal &other )
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    Animal::makeSound( void ) const
{
    std::cout << "Sound of Animal" << std::endl;
}

std::string Animal::getType( void ) const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}