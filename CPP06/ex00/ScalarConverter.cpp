/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:54 by martorre          #+#    #+#             */
/*   Updated: 2024/06/05 16:04:51 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter( const ScalarConverter &other )
{
    *this = other;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);   
}

int	ft_isdigit(int c)
{
	int	cont;

	cont = 0;
	if (c >= 48 && c <= 57)
		cont = 1;
	return (cont);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' || c == '\v' || c == '\f'
		|| c == '\n')
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
	return (0);
}

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    if (!str)
        return 0;
    while (str)
        i++;
    return i;
}

void ScalarConverter::convertir(const char *literal) 
{
    // Intentar convertir a int
    try 
    {
        int intValue = atoi(literal);
        std::cout << "int: " << intValue << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "int: impossible" << std::endl;
    }
    // Intentar convertir a float
    try
    {
        float floatValue = atof(literal);
        if (floatValue == std::numeric_limits<float>::infinity()
            || floatValue == -std::numeric_limits<float>::infinity() || std::isnan(floatValue))
        {
            std::cout << "float: " << floatValue << "f" << std::endl;
        } 
        else
        {
            std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
        }
    }
    catch (const std::exception& e)
    {
        std::cout << "float: impossible" << std::endl;
    }
    // Intentar convertir a double
    try
    {
        double doubleValue = atof(literal);
        if (doubleValue == std::numeric_limits<double>::infinity() || doubleValue == -std::numeric_limits<double>::infinity() || std::isnan(doubleValue))
        {
            std::cout << "double: " << doubleValue << std::endl;
        }
        else
        {
            std::cout << "double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
        }
    }
    catch (const std::exception& e)
    {
        std::cout << "double: impossible" << std::endl;
    }
    // Intentar convertir a char
    try
    {
		std::string s;
		std::stringstream out;
		out << literal;
		s = out.str();
		std::cout << "char: " << s << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "char: impossible" << std::endl;
    }
}

ScalarConverter::~ScalarConverter()
{

}
