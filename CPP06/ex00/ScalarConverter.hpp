/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:58:01 by martorre          #+#    #+#             */
/*   Updated: 2024/06/11 13:32:21 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cstdlib>

typedef	enum	type
{
	_NONE = 0,
	_CHAR,
	_INT,
	_DOUBLE,
	_FLOAT,
	_SPECIAL
}	dataType;

class ScalarConverter{
    private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter	&operator=(const ScalarConverter& other);
		~ScalarConverter();
				
    public:
		static void convertir(const std::string& literal);
};
