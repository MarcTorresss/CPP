/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:04:33 by martorre          #+#    #+#             */
/*   Updated: 2024/04/25 18:03:14 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _raw_value(0)
{

}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::Fixed(const int num)
{
    _raw_value = num << _fractional_bits;
}

Fixed::Fixed(const float num)
{
    _raw_value = num * (1 << _fractional_bits);
}

int	Fixed::getRawBits() const
{
    return (_raw_value);
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return (*this);
    this->_raw_value = other.getRawBits();
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
	_raw_value = raw;
}

float   Fixed::toFloat( void ) const
{
    return static_cast<float>(_raw_value) / (1 << _fractional_bits);
    //return (_raw_value / (1 << _fractional_bits));
};

int     Fixed::toInt( void ) const
{
    return (_raw_value >> _fractional_bits);
};

bool	Fixed::operator>(const Fixed &other) const
{
	return this->_raw_value > other._raw_value;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->_raw_value > other._raw_value;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->_raw_value >= other._raw_value;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->_raw_value <= other._raw_value;
}


Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;
	result.setRawBits(this->_raw_value + other._raw_value);
	return result;
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;
	result.setRawBits(this->_raw_value + other._raw_value);
	return result;
}

//checkear
Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;
	int		temp = 0;
	
	temp *= other._raw_value;
	result.setRawBits(temp);
	return result;
}

//checkear
Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	result;
	int		temp = 0;
	temp /= other._raw_value;
	result.setRawBits(temp);
	return result;
}

Fixed&	Fixed::operator+=(const Fixed &other)
{
	this->_raw_value += other._raw_value;
	return *this;
}

Fixed&	Fixed::operator-=(const Fixed &other)
{
	this->_raw_value -= other._raw_value;
	return *this;
}

Fixed&	Fixed::operator*=(const Fixed &other)
{
	_raw_value = (_raw_value * other._raw_value) >> _fractional_bits;
	return *this;
}

Fixed&	Fixed::operator/=(const Fixed &other)
{
	_raw_value = (_raw_value << other._raw_value) / _fractional_bits;
	return *this;
}

Fixed&	Fixed::operator++( int )
{
	Fixed	tmp;

	tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed&	Fixed::operator--( int )
{
	Fixed	tmp;

	tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed&	Fixed::operator++()
{
	++_raw_value;
	return *this;
}

Fixed&	Fixed::operator--()
{
	--_raw_value;
	return *this;
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
	{
		return f1;
	}
	else
		return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
	{
		return f1;
	}
	else
		return f2;
}

const	Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
	{
		return f1;
	}
	else
		return f2;
}

const	Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
	{
		return f1;
	}
	else
		return f2;
}