/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:15:11 by martorre          #+#    #+#             */
/*   Updated: 2024/05/08 16:51:24 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *  _invetory[4];
        
	public:
        MateriaSource();
        MateriaSource( const MateriaSource& );
		MateriaSource	&operator=(const MateriaSource &other);
        ~MateriaSource();

		void        learnMateria(AMateria*);
		AMateria*   createMateria(std::string const & type);
};