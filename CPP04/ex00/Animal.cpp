/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:43:32 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 18:00:52 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("defalut")
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal( std::string _type ): type(_type)
{
    std::cout << "Constructor Type called" << std::endl;
}

Animal::Animal( const Animal &other )
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Animal	&Animal::operator=( const Animal &other )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    Animal::makeSound( void ) const
{
    std::cout << "hnrtfghjj kfufyuybk,gu,yj" << std::endl;
}

std::string Animal::getType( void ) const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}