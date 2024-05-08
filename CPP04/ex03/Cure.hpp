/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:47:14 by martorre          #+#    #+#             */
/*   Updated: 2024/05/08 16:58:21 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure( const Cure& );
		Cure		&operator=(const Cure &other);
        AMateria*	clone() const;
        void		use(ICharacter& target);
        ~Cure();
};