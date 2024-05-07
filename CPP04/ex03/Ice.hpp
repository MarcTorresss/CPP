/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:51 by martorre          #+#    #+#             */
/*   Updated: 2024/05/07 15:56:48 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:

    public:
        Ice();
        Ice( const Ice& );
		Ice	&operator=(const Ice &other);
        ~Ice();
};