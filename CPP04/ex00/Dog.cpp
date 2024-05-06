/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:45 by martorre          #+#    #+#             */
/*   Updated: 2024/05/06 18:02:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("defalut")
{
    std::cout << "Default constructor called" << std::endl;
}

Dog::Dog( std::string _type): Animal(_type)
{
    std::cout << "Constructor Type called" << std::endl;
}

Dog::Dog( const Dog &other )
{
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);   
}

void    Dog::makeSound() const
{
    std::cout << "GGUUUAAUUUUUUU" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called" << std::endl;
}