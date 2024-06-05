/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:39:07 by martorre          #+#    #+#             */
/*   Updated: 2024/06/05 16:07:03 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main() 
{
    ScalarConverter::convertir("11234567");
    std::cout << std::endl;
    ScalarConverter::convertir("inf");
    std::cout << std::endl;
    ScalarConverter::convertir("nan");
    std::cout << std::endl;
    ScalarConverter::convertir("a");
    std::cout << std::endl;
    ScalarConverter::convertir("0");
    std::cout << std::endl;
    ScalarConverter::convertir("not_a_number");

    return 0;
}