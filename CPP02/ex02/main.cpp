/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martorre <martorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:10:49 by martorre          #+#    #+#             */
/*   Updated: 2024/04/29 17:18:20 by martorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

const char	*ft_print_t_f(int num)
{
    if (num == 0)
        return ("False");
    else
        return ("True");
}

int main( void )
{
    {
        Fixed   pep(1);
        Fixed   narcis(33.6f);
        Fixed   jacint(2.5f);
        Fixed   marc(10);

        std::cout << std::endl << "COMPRASION OPERATORS" << std::endl << std::endl;
        std::cout << "pep = " << pep << std::endl;
        std::cout << "narcis = " << narcis << std::endl;
        std::cout << "Is " << pep << " smaller than " << narcis << ": " << ft_print_t_f(pep < narcis) << std::endl;
        std::cout << "Is " << pep << " greater than " << narcis << ": " << ft_print_t_f(pep > narcis) << std::endl;
		std::cout << "Is " << pep << " smaller o equal than " << narcis << ": " << ft_print_t_f(pep <= narcis) << std::endl;
        std::cout << "Is " << pep << " greater o equal than " << narcis << ": " << ft_print_t_f(pep >= narcis) << std::endl;
		std::cout << "Is " << pep << " diferent than " << narcis << ": " << ft_print_t_f(pep != narcis) << std::endl;
        std::cout << "Is " << pep << " equal than " << narcis << ": " << ft_print_t_f(pep == narcis) << std::endl;
		std::cout << std::endl << "ARITHMETIC OPERATORS" << std::endl << std::endl;
		std::cout << "jacint = " << jacint << std::endl;
        std::cout << "marc = " << marc << std::endl;
		std::cout << "sumar: " << jacint << " + " << marc << " = " << (jacint + marc) << std::endl;
        std::cout << "resta " << jacint << " - " << marc << " = " << (jacint - marc) << std::endl;
		std::cout << "multi " << jacint << " * " << marc << " = " << (jacint * marc) << std::endl;
        std::cout << "divi " << jacint << " / " << marc << " = " << (jacint / marc) << std::endl;
		std::cout << std::endl << "INCREMENT/DECRMENT" << std::endl << std::endl;
		std::cout << marc << std::endl;
		std::cout << "pre-increment: " << marc << " ++val " << " = " << ++marc << std::endl;
		std::cout << marc << std::endl;
		std::cout << "post-increment: " << marc << " val++ " << " = " << marc++ << std::endl;
		std::cout << marc << std::endl;
		std::cout << "pre-decrement: " << marc << " --val " << " = " << --marc << std::endl;
		std::cout << marc << std::endl;
		std::cout << "post-decrement: " << marc << " val-- " << " = " << --marc << std::endl;
		std::cout << marc << std::endl;
		std::cout << std::endl << "MAX/MIN" << std::endl << std::endl;
		std::cout << "MAX:" << pep << " - " << narcis << " = " << Fixed::max((const Fixed)pep, (const Fixed)narcis) << std::endl;
		std::cout << "MIN:" << pep << " - " << narcis << " = " << Fixed::min(pep, narcis) << std::endl;
		std::cout << "MIN:" << jacint << " - " << narcis << " = " << Fixed::min((const Fixed)jacint, (const Fixed)narcis) << std::endl;
		std::cout << "MAX:" << jacint << " - " << narcis << " = " << Fixed::max(jacint, narcis) << std::endl;
    }
    {
		std::cout << std::endl << "SUBJECT MAIN" << std::endl << std::endl;
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        std::cout << b << std::endl;

        std::cout << Fixed::max( a, b ) << std::endl;
    }
    return 0;
}
