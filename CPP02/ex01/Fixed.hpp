/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:48:57 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 12:21:33 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Fixed{
    private:
        int					_rawValue;
        static const int    _fractionalBits = 8;
		
    public:
		Fixed();
        Fixed(const Fixed& );
        Fixed(const int);
        Fixed(const float);
        Fixed			&operator=(const Fixed &other);
        ~Fixed();
		int		getRawBits(void) const;
        void	setRawBits( int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &val, const Fixed &nb);