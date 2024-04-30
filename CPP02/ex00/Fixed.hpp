/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:48:57 by martorre          #+#    #+#             */
/*   Updated: 2024/04/30 12:31:33 by martorre         ###   ########.fr       */
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
        Fixed	&operator=(const Fixed &other);
        ~Fixed();
		int		getRawBits(void) const;
        void	setRawBits( int const raw);
};