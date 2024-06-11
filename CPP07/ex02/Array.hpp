/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:41:25 by martorre          #+#    #+#             */
/*   Updated: 2024/06/11 16:19:33 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned    int _n;
        T*				_the_array;
    public:
		Array();
		Array( unsigned int );
		Array( const Array& );
		Array	&operator=( const Array& );
		T&		operator[]( unsigned int );
		unsigned int	size( void ) const;
		~Array();
};

#include "Array.tpp"