/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:40:12 by martorre          #+#    #+#             */
/*   Updated: 2024/06/13 14:49:55 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span{
    private:
        unsigned int        _N;
        std::vector<int>    _vector;
				
    public:
		Span( void );
		Span( unsigned int );
		Span( const Span& );
		Span            &operator=(const Span &other);
        void            addNumber( int );
        unsigned int    shortestSpan( void );
        unsigned int    longestSpan( void );
        void            printVector( void );

        template <typename T>
        void            addMultiNumbers( T, T );
		~Span();
};

template <typename T>
void    Span::addMultiNumbers( T begin, T end)
{
    for (;begin != end; begin++)
        addNumber(*begin);
}