/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:15:23 by martorre          #+#    #+#             */
/*   Updated: 2024/06/10 18:06:38 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array()
{

}

template <typename T>
Array<T>::Array( unsigned int n )
{
	if (n == 0)
		throw std::exception("cannot allocate 0 bytes of memory");
	new T[n];
}

template <typename T>
Array<T>::Array( const Array &other )
{
    *this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array &other )
{
    if (this == &other)
		return (*this);
	_n = other._n;
	_the_array = other._the_array;
	return (*this);   
}

template <typename T>
T	Array<T>::operator[]( unsigned int i )
{
	if (i >= _n)
		throw std::exception("out of bounds");
	return (_the_array[i]);
}

template <typename T>
unsigned int	Array<T>::size( void ) const
{
	return n;
}

template <typename T>
Array<T>::~Array()
{
	delete[] the_array;
}