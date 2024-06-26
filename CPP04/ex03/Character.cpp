/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:59:10 by martorre          #+#    #+#             */
/*   Updated: 2024/05/13 15:16:29 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character( std::string name )
{
    _name = name;
    int i = 0;
    while(i < 4)
    {
        _invetory[i] = NULL;
        i++;
    }
} 

Character::Character( const Character &other )
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
    if (this == &other)
        return (*this);
    for(int i = 0; i < 4; i++)
		_invetory[i] = other._invetory[i];
    return (*this);   
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    int j = 0;
    while (j < 4)
    {
        if (_invetory[j] == NULL)
        {
			_invetory[j] = m;
			break ;
		} 
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
    // printf("\n i = %d ", idx);
    // (void) target;
    if ((idx < 4 && idx >= 0) && _invetory[idx] != NULL)
    {
        // std::cout << target.getName() << std::endl; 
        _invetory[idx]->use(target); //llama use de la materia
    }
}

Character::~Character() {}