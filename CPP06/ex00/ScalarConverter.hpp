/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:58:01 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 17:31:35 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConverter{
    private:
				
    public:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& );
		ScalarConverter	&operator=(const ScalarConverter &other);
		static void convertir(const std::string& literal);
		~ScalarConverter();
};
