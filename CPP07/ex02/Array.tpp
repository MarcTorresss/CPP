/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:15:23 by martorre          #+#    #+#             */
/*   Updated: 2024/06/11 17:05:19 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_n = 0;
	_the_array = NULL;
}

template <typename T>
Array<T>::Array( unsigned int n )
{
	if (n == 0)
		throw std::out_of_range("cannot allocate 0 bytes of memory");
	_n = n;
	_the_array = new T[n]();
}

template <typename T>
Array<T>::Array( const Array &other )
{
	_n = other._n;
	_the_array = new T[other._n]();
	for (unsigned int i = 0; i < _n; i++)
		_the_array[i] = other._the_array[i];
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array &other )
{
	if (this == &other)
		return *this;
    if (_the_array)
        delete [] _the_array;
    _n = other._n;
    _the_array = new T[_n]();
    for (unsigned int i = 0; i < _n; i++)
    	_the_array[i] = other._the_array[i];
    return (*this);
}

template <typename T>
T&	Array<T>::operator[]( unsigned int i )
{
	if (i >= _n)
		throw std::out_of_range("out of bounds");
	return _the_array[i];
}

template <typename T>
unsigned int	Array<T>::size( void ) const
{
	return _n;
}

template <typename T>
Array<T>::~Array()
{
	if (_the_array)
		delete[] _the_array;
}