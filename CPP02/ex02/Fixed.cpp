/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:04:33 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 12:20:47 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawValue(0)
{

}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::Fixed(const int num)
{
    _rawValue = num << _fractionalBits;
}

Fixed::Fixed(const float num)
{
    _rawValue = roundf(num * (1 << _fractionalBits));
}

int	Fixed::getRawBits() const
{
    return (_rawValue);
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return (*this);
    this->_rawValue = other.getRawBits();
    return (*this);        
}

std::ostream &operator<<(std::ostream &other, const Fixed &nb)
{
    return (other << nb.toFloat());
}

Fixed::~Fixed()
{

};

void	Fixed::setRawBits( int const raw)
{
	_rawValue = raw;
}

float   Fixed::toFloat( void ) const
{
    return static_cast<float>(_rawValue) / (1 << _fractionalBits);
    //return (_rawValue / (1 << _fractionalBits));
};

int     Fixed::toInt( void ) const
{
    return (_rawValue >> _fractionalBits);
};

bool	Fixed::operator>(const Fixed &other) const
{
	return this->_rawValue > other._rawValue;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->_rawValue < other._rawValue;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->_rawValue >= other._rawValue;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->_rawValue <= other._rawValue;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->_rawValue != other._rawValue;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->_rawValue == other._rawValue;
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return this->toFloat() + other.toFloat();
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return this->toFloat() - other.toFloat();
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return this->toFloat() * other.toFloat();
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return this->toFloat() / other.toFloat();
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp = *this;
	++(*this);
	return tmp;
}

Fixed	&Fixed::operator++()
{
	++_rawValue;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp = *this;
	--(*this);
	return	tmp;
}


Fixed	&Fixed::operator--()
{
	--_rawValue;
	return *this;
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	else
		return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}

const	Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return f1;
	else
		return f2;
}

const	Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}