/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:55:23 by martorre          #+#    #+#             */
/*   Updated: 2024/05/08 15:31:12 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure( const Cure &other ): AMateria(other) {}

Cure	&Cure::operator=(const Cure& other)
{
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

AMateria*   Cure::clone() const
{
    return new Cure();
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}