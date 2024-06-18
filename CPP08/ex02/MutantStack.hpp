/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:17:55 by martorre          #+#    #+#             */
/*   Updated: 2024/06/18 12:37:50 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack< T >::container_type::iterator iterator;

    iterator    begin( void );
    iterator    end( void );
	MutantStack( void );
	MutantStack( const MutantStack& );
	MutantStack &operator=(const MutantStack &other);
	~MutantStack( void );
};

template<typename T>
MutantStack< T >::MutantStack( void ): std::stack<T>()
{

}

template<typename T>
MutantStack< T >::MutantStack( const MutantStack &other ):  std::stack<T>(other)
{

}

template<typename T>
MutantStack< T > &MutantStack< T >::operator=(const MutantStack &other)
{
    return (std::stack< T >::operator=(other));
}


template<typename T>
typename MutantStack< T >::iterator MutantStack< T >::begin( void )
{
    return  this->c.begin();
}

template<typename T>
typename MutantStack< T >::iterator MutantStack< T >::end( void )
{
    return  this->c.end();
}

template<typename T>
MutantStack< T >::~MutantStack( void )
{

}