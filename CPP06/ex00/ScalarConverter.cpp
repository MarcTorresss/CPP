/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:54 by martorre          #+#    #+#             */
/*   Updated: 2024/06/11 15:32:36 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>
#include <cerrno>

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

bool test_int(const std::string literal)
{
    long	res = 0;
    size_t		i = 0;
    int		sign = 1;

    if (literal[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    for (; i < literal.size(); i++)
    {
        if (isdigit(literal[i]) == 0)
            return (false);
        res *= 10;
        res += literal[i] - '0';
        if (res * sign > INT_MAX || res * sign < INT_MIN)
            return (false);
    }
    return (true);
}

void	convertInt(const std::string& literal)
{
    char*	endptr;
    long	numlong = strtol(literal.c_str(), &endptr, 10);

    if (*endptr != '\0')
	{
        std::cout << "Invalid input: not a valid integer" << std::endl;
        return;
    }
	if (numlong > INT_MAX || numlong < INT_MIN)
	{
        std::cout << "int: impossible" << std::endl;
		return ;
	}

    int numint = static_cast<int>(numlong);
    double numdouble = static_cast<double>(numint);
    float numfloat = static_cast<float>(numint);
    char c = static_cast<char>(numint);

    std::cout << "char: '" << c << "'" << std::endl;
	
    if (test_int(literal))
        std::cout << "Int: " << numint << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << numfloat << "f" << std::endl;
    std::cout << "double: " << numdouble << std::endl;
}

void	convertFloat(const std::string& literal)
{
    double numdouble = std::atof(literal.c_str());
    int numint = static_cast<int>(numdouble);
    float numfloat = static_cast<float>(numdouble);
    char c = static_cast<char>(numdouble);

    if (!isascii(numdouble))
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    if (numint > INT_MAX || numint < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << numint << std::endl;
    std::cout << "float: " << numfloat << "f" << std::endl;
    std::cout << "double: " << numdouble << std::endl;
}

void	convertChar(const char c)
{
	if (c < 33 || c > 126)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convertDouble(const std::string& literal)
{
    double numdouble = std::atof(literal.c_str());
    int numint = static_cast<int>(numdouble);
    float numfloat = static_cast<float>(numdouble);
    char c = static_cast<char>(numdouble);

    if (!isascii(numdouble))
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    if (numint > INT_MAX || numint < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << numint << std::endl;
    std::cout << "float: " << numfloat << "f" << std::endl;
    std::cout << "double: " << numdouble << std::endl;
}

void specialcase(const std::string& literal)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (literal == "+inf")
        std::cout << "float: " << literal << "f" << std::endl << "double: " << literal << std::endl;
    else if (literal == "+inff")
        std::cout << "float: " << literal << std::endl << "double: +inf" << std::endl;
    else if (literal == "-inf")
        std::cout << "float: " << literal << "f" << std::endl << "double: " << literal << std::endl;
    else if (literal == "-inff")
        std::cout << "float: " << literal << std::endl << "double: -inf" << std::endl;
    else if (literal == "nan")
        std::cout << "float: " << literal << "f" << std::endl << "double: " << literal << std::endl;
    else if (literal == "nanf")
        std::cout << "float: " << literal << std::endl << "double: nan" << std::endl;
}

dataType	check_special_char(const std::string& literal)
{
    if (literal == "+inff" || literal == "-inff" || literal == "nanf")
		return (_SPECIAL);
 	if (literal == "+inf" || literal == "-inf" || literal == "nan")
		return (_SPECIAL);
    return (_NONE);
}

int	countpoints(const std::string literal)
{
	int	qtt = 0;

	for (int i = 0; literal[i]; i++)
	{
		if (literal[i] == '.')
			qtt++;
	}
	return (qtt);
}

int	isInt(const std::string& literal)
{
	size_t i = 0;

	if (literal[0] == '-')
        i++;
    for (;i < literal.size(); i++)
    {
        if (isdigit(literal[i]) == 0)
            return (_NONE);
    }
    return (_INT);
}

int isFloat(const std::string& literal)
{
	size_t i = 0;

	if (literal[0] == '-')
        i++;
    for (;i < literal.size() - 1; i++)
    {
        if (isdigit(literal[i]) == 0 && literal[i] != '.')
            return (_NONE);
    }
    return (_FLOAT);
}

int	isDouble(const std::string& literal)
{
	size_t i = 0;

	if (literal[0] == '-')
        i++;
    for (;i < literal.size(); i++)
    {
        if (isdigit(literal[i]) == 0 && literal[i] != '.')
            return (_NONE);
    }
    return (_DOUBLE);
}

int	checktype(const std::string& literal)
{
	if (check_special_char(literal) == _SPECIAL)
		return (_SPECIAL);
	if (literal.size() == 1)
		return (_CHAR);
	switch (countpoints(literal))
	{
	case 0:
		return (isInt(literal));
	case 1:
		if (literal[literal.size() - 1] == 'F' || literal[literal.size() - 1] == 'f')
    		return (isFloat(literal));
        else
            return (isDouble(literal));
	default:
		return (-1);
	}
}

void ScalarConverter::convertir(const std::string& literal)
{
	std::cout << std::fixed;

	switch (checktype(literal))
	{
	case _INT:
		convertInt(literal);
		break;
	case _FLOAT:
		convertFloat(literal);
		break;
	case _CHAR:
		convertChar(literal[0]);
		break;
	case _DOUBLE:
		convertDouble(literal);
		break;
	case _SPECIAL:
		specialcase(literal);
		break;
	default:
		break;
	}    
}

ScalarConverter::~ScalarConverter()
{

}
