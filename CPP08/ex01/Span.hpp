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


class Span{
    private:
        unsigned int _N[];
				
    public:
		Span();
		Span( unsigned int );
		Span( const Span& );
		Span	&operator=(const Span &other);
        void	addNumber( int );
        int		shortestSpan();
        int		longestSpan();
		~Span();
};