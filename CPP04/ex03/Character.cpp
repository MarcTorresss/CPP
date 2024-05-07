/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:59:10 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 18:02:13 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character( const Character &other )
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
    if (this == &other)
        return (*this);
    *this->_invetory = other._invetory;
    return (*this);   
}

std::string const & Character::getName()
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    int j = 0;
    while (j < 4 && _invetory[j] == NULL)
    {
        if (j < 4)
            _invetory[j] = m;
        j++;
    }
}

void Character::unequip(int idx)
{
    if (idx < 4)
        _invetory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && _invetory[idx])
        _invetory[idx].use(target); //llama use de la materia
}

Character::~Character() {}