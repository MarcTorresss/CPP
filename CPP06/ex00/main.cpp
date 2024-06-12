/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:39:07 by martorre          #+#    #+#             */
/*   Updated: 2024/06/12 12:23:41 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdio.h>

int main(int argc, char **argv) 
{
    if (argc == 2)
        ScalarConverter::convertir(argv[1]);
    else
        std::cout << "Invalid arguments" << std::endl;

    double positiveInfinity = INFINITY;
    double negativeInfinity = -INFINITY;
    double notANumber = NAN;

    printf("Positive Infinity: %f\n", positiveInfinity);
    printf("Negative Infinity: %f\n", negativeInfinity);
    printf("NaN: %f\n", notANumber);
    return 0;
}