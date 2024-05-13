/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:45 by martorre          #+#    #+#             */
/*   Updated: 2024/05/13 12:23:10 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("defalut")
{
    std::cout << "Default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string _type): WrongAnimal(_type)
{
    std::cout << "Constructor Type called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other )
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    WrongCat::makeSound() const
{
    std::cout << "MIIIIIIAAAAAAUUUUUUUUUUUUU" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called" << std::endl;
}