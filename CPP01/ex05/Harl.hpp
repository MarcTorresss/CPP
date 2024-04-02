/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:25:05 by martorre          #+#    #+#             */
/*   Updated: 2024/04/02 13:31:58 by martorre         ###   ########.fr       */
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