/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:47:14 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 15:57:10 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:

    public:
        Cure();
        Cure( const Cure& );
		Cure	&operator=(const Cure &other);
        ~Cure();
};