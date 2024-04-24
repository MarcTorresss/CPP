/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:04:33 by martorre          #+#    #+#             */
/*   Updated: 2024/04/24 16:13:13 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _raw_value(0)
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
    _raw_value = num << _fractional_bits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    _raw_value = num * (1 << _fractional_bits);
}

int	Fixed::getRawBits() const
{
    return (_raw_value);
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_raw_value = other.getRawBits();
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
	_raw_value = raw;
}

float   Fixed::toFloat( void ) const
{
    return (_raw_value / (1 << _fractional_bits));
};

int     Fixed::toInt( void ) const
{
    return (_raw_value >> _fractional_bits);
};