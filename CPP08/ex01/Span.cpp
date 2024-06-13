/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spant.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:40:08 by martorre          #+#    #+#             */
/*   Updated: 2024/06/13 14:43:35 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _N = 0;
}

Span::Span( unsigned int N)
{
    _N = N;
}

Span::Span( const Span &other )
{
    *this = other;
}

Span	&Span::operator=(const Span &other)
{
    if (this == &other)
        return (*this);
    _N = other._N;
    return (*this);
}

void	Span::addNumber( int num )
{
    if (_vector.size() >= this->_N)
        throw std::logic_error("no more space in the vector");
    _vector.push_back(num);
}

unsigned int    Span::shortestSpan()
{
    if (_vector.size() < 2)
        throw std::logic_error("There ara less than 2 positions");
    std::sort(_vector.begin(), _vector.end());
    return (_vector[1] - _vector[0]);
}

unsigned int    Span::longestSpan()
{
    if (_vector.size() < 2)
        throw std::logic_error("There ara less than 2 positions");
    std::sort(_vector.begin(), _vector.end());
    return (_vector[_vector.size() - 1] - _vector[0]);
}

void	Span::printVector( void )
{
	std::cout << "The vector" << std::endl;
    std::vector<int>::iterator iter = _vector.begin();
	while (iter != _vector.end())
    {
		std::cout << *iter << std::endl;
        iter++;
    }
}

Span::~Span()
{

}