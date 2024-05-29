/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:25:21 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 16:01:42 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

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

ft_tochar(const std::string& literal)
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

int main() {
    const char* str = "3.1435165876";
    float result1 = ft_atof(str);
    std::cout << "Result float: " << result1 << std::endl;
    int result2 = ft_atoi(str);
    std::cout << "Result int : " << result2 << std::endl;
    double result3 = ft_double(str);
    std::cout << "Result double: " << result3 << std::endl;
    return 0;
}