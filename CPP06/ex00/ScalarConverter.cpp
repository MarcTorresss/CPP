/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:54 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 17:31:38 by martorre         ###   ########.fr       */
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

float ft_atof(const std::string& literal)
{
    float result = 0.0f;
    float sign = 1.0f;
    float fraction = 1.0f;
    int i = 0;

    while (ft_isspace(literal[i]))
        i++;
    if (literal[i] == '-')
    {
        sign = -1.0f;
        i++;
    }
    else if (literal[i] == '+')
    {
        i++;
    }
    // Convertir parte entera
    while (ft_isdigit(literal[i]))
    {
        result = result * 10.0f + (literal[i] - '0');
        i++;
    }
    // Convertir parte fraccional
    if (literal[i] == '.')
    {
        i++;
        while (ft_isdigit(literal[i]))
        {
            fraction *= 0.1f;
            result += fraction * (literal[i] - '0');
            i++;
        }
    }

    return sign * result;
}

int	ft_atoi(const std::string& literal)
{
	int	i;
	int	result;
	int	sig;

	i = 0;
	result = 0;
	sig = 1;
    while (ft_isspace(literal[i]))
        i++;
	if (literal[i] == '-')
		sig *= -1;
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (literal[i] >= '0' && literal[i] <= '9')
	{
		result *= 10;
		result += (literal[i] - '0');
		i++;
	}
	return (result * sig);
}

double  ft_double(const std::string& literal)
{
    double result = 0.0;
    double sign = 1.0;
    double fraction = 1.0;
    int i = 0;

    while (ft_isspace(literal[i]))
        i++;
    if (literal[i] == '-')
    {
        sign = -1.0;
        i++;
    }
    else if (literal[i] == '+')
    {
        i++;
    }
    // Convertir parte entera
    while (ft_isdigit(literal[i]))
    {
        result = result * 10.0 + (literal[i] - '0');
        i++;
    }
    // Convertir parte fraccional
    if (literal[i] == '.')
    {
        i++;
        while (ft_isdigit(literal[i]))
        {
            fraction *= 0.1;
            result += fraction * (literal[i] - '0');
            i++;
        }
    }
    return sign * result;
}

void ft_tochar(const std::string& literal)
{
    if (literal.length() == 1 && ft_isprint(literal[0]) && !ft_isdigit(literal[0]))
    {
       char charValue = literal[0];
        std::cout << "char: '" << charValue << "'" << std::endl;
    }
    else
    {
        int intValue = ft_atoi(literal);
        if (intValue >= 0 && intValue <= 127 && ft_isprint(intValue))
        {
            char charValue = static_cast<char>(intValue);
            std::cout << "char: '" << charValue << "'" << std::endl;
        }
        else
        {
            std::cout << "char: impossible" << std::endl;
        }
    }
}

static void convertir(const std::string& literal) 
{
    try 
    {
        // Intentar convertir a int
        try 
        {
            int intValue = ft_atoi(literal);
            std::cout << "int: " << intValue << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << "int: impossible" << std::endl;
        }

        // Intentar convertir a float
        try
        {
            float floatValue = ft_atof(literal);
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
                double doubleValue = ft_double(literal);
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
            ft_tochar(literal);
    } 
    catch (const std::exception& e)
    {
        std::cout << "char: impossible" << std::endl;
    }
}

ScalarConverter::~ScalarConverter()
{

}