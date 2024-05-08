/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:51 by martorre          #+#    #+#             */
/*   Updated: 2024/05/08 16:58:14 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice( const Ice& );
		Ice			&operator=(const Ice &other);
        AMateria*	clone() const;
        void		use(ICharacter& target);
        ~Ice();
};