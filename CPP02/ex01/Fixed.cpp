/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:04:33 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 12:30:59 by martorre         ###   ########.fr       */
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
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    _rawValue = num << _fractionalBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    _rawValue = num * (1 << _fractionalBits);
}

int	Fixed::getRawBits() const
{
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

std::ostream &operator<<(std::ostream &val, const Fixed &nb)
{
    return (val << nb.toFloat());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

void	Fixed::setRawBits( int const raw)
{
	_rawValue = raw;
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(getRawBits()) / (1 << _fractionalBits));
};

int     Fixed::toInt( void ) const
{
    return (_rawValue >> _fractionalBits);
};