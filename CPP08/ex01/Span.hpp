/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:40:12 by martorre          #+#    #+#             */
/*   Updated: 2024/06/12 17:53:19 by martorre         ###   ########.fr       */
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
		~Span();
};