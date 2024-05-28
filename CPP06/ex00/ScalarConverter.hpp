/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:58:01 by martorre          #+#    #+#             */
/*   Updated: 2024/05/28 16:59:01 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdexcept>
#include "Form.hpp"

class ScalarConverter{
    private:
				
    public:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& );
		ScalarConverter	&operator=(const ScalarConverter &other);
		~ScalarConverter();
};