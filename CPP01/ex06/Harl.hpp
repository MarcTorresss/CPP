/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:39:35 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 14:39:39 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void ); 

    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};