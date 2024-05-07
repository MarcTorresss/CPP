/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:43:32 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 11:42:45 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("defalut")
{
    std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string _type ): type(_type)
{
    std::cout << "Constructor Type called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &other )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "hnrtfghjj kfufyuybk,gu,yj" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called" << std::endl;
}