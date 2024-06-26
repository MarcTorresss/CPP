/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:45 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 12:02:51 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog( std::string _type)
{
    std::cout << "Dog Constructor Type called" << std::endl;
    type = _type;
}

Dog::Dog( const Dog &other )
{
    std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
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
    std::cout << "Dog Destructor called" << std::endl;
}