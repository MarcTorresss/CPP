/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:41:45 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 12:35:12 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat( std::string _type)
{
    std::cout << "Constructor Type called" << std::endl;
    type = _type;
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
    std::cout << "Cat Destructor called" << std::endl;
    delete brain;
}