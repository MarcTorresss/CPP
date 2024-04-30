/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:04:33 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 12:31:52 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
};

int	Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_rawValue);
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_rawValue = other.getRawBits();
    return (*this);        
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

void	Fixed::setRawBits( int const raw)
{
	_rawValue = raw;
}