/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:43:32 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 12:02:39 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("defalut")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string _type ): type(_type)
{
    std::cout << "Animal Constructor Type called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
    std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &other )
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "Sound of Animal" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal Destructor called" << std::endl;
}