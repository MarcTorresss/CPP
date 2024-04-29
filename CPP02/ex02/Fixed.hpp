/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:48:57 by martorre          #+#    #+#             */
/*   Updated: 2024/04/29 17:05:31 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Fixed{
    private:
        int					_raw_value;
        static const int    _fractionalBits = 8;
		
    public:
		Fixed();
        Fixed(const Fixed& );
        Fixed(const int);
        Fixed(const float);
        ~Fixed();

        Fixed	&operator=(const Fixed &other);
        bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		
		Fixed	operator++( int );
		Fixed	operator--( int );
		Fixed&	operator++();
		Fixed&	operator--();

		static	Fixed	&min(Fixed &f1, Fixed &f2);
		static	Fixed	&max(Fixed &f1, Fixed &f2);
		static const	Fixed	&min(const Fixed &f1, const Fixed &f2);
		static const	Fixed	&max(const Fixed &f1, const Fixed &f2);

		int		getRawBits(void) const;
        void	setRawBits( int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &other, const Fixed &nb);