/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:49:06 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 18:03:43 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("Ice") {}

Ice( const Ice& other ): AMateria(other) {}

Ice	&operator=(const Ice& other)
{
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

virtual AMateria* clone() const
{
    return new Ice(*this);
}

virtual void use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}