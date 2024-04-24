/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:48:57 by martorre          #+#    #+#             */
/*   Updated: 2024/04/24 15:48:02 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Fixed{
    private:
        int					_raw_value;
        static const int    _fractional_bits = 8;
		
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