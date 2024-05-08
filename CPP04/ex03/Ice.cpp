/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:49:06 by martorre          #+#    #+#             */
/*   Updated: 2024/05/08 16:02:40 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice( const Ice& other ): AMateria(other) {}

Ice	&Ice::operator=(const Ice& other)
{
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice();
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}