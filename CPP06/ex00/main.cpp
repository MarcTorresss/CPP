/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:39:07 by martorre          #+#    #+#             */
/*   Updated: 2024/05/29 15:05:13 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main() 
{
    ScalarConverter::convertir("42");
    ScalarConverter::convertir("nan");
    ScalarConverter::convertir("inf");
    ScalarConverter::convertir("-inf");
    ScalarConverter::convertir("a");
    ScalarConverter::convertir("0");
    ScalarConverter::convertir("not_a_number");

    return 0;
}