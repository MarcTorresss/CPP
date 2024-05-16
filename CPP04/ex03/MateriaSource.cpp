/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:15:11 by martorre          #+#    #+#             */
/*   Updated: 2024/05/16 13:10:11 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        _invetory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &other )
{
	*this = other;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
    if (this == &other)
        return (*this);
    for(int i = 0; i < 4; i++)
        _invetory[i] = other._invetory[i];
    return (*this);   
}

void    MateriaSource::learnMateria( AMateria* m )
{
    for(int i = 0; i < 4; i++)
    {
        if (_invetory[i] == NULL)
        {
            _invetory[i] = m->clone();
            break ;
        }
    }
    delete m;
}

AMateria*   MateriaSource::createMateria( std::string const & type )
{
    for (int i = 0; i < 4; i++)
    {
       if (_invetory[i])
       {
            if (_invetory[i]->getType() == type)
                return(_invetory[i]->clone());
       }
    } 
    return (NULL);
} 

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (_invetory[i])
            delete _invetory[i];
    }
}
