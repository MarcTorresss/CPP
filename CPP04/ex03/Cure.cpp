/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:55:23 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 15:58:15 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure( const Cure& other ): AMateria(other) {}

Cure	&operator=(const Cure& other)
{
    if (this == &other)
        return *this;
    this->_type = other._type;
    return *this;
}

virtual AMateria* clone() const override
{
    return new Cure(*this);
}

virtual void use(ICharacter& target) override
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}