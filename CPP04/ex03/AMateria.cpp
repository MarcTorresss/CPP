/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:19:01 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 15:48:08 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    _type = "default";
}

AMateria::AMateria( const AMateria &other )
{
    *this = other;
}

AMateria	&AMateria::operator=(const AMateria &other)
{
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);   
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

AMateria::~AMateria()
{
    
}