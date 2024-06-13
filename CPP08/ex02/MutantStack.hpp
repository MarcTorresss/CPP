/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:17:55 by martorre          #+#    #+#             */
/*   Updated: 2024/06/13 17:34:10 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
    using std::stack<T, std::deque<T> >::c;
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;
    
    iterator begin() { return c.begin(); }
    iterator end() { return c.end(); }
    const_iterator cbegin() const { return c.cbegin(); }
    const_iterator cend() const { return c.cend(); }
	// MutantStack( void );
	// MutantStack( unsigned int );
	// MutantStack( const MutantStack& );
	// MutantStack		&operator=(const MutantStack &other);
	// ~MutantStack();
};